# Gym Membership Management System

A suite of C programs designed to manage gym membership records through persistent file storage. This project demonstrates fundamental concepts of data structures and file handling in the C programming language.

## Overview

The system comprises three specialized modules that collectively manage the complete lifecycle of gym membership records, from data entry to retrieval and filtering.

## Project Architecture

The system is organized into three distinct modules:

### 1. Data Entry & Storage (`Recordss.c`)

Serves as the primary input interface for the system.

- **Structural Organization**: Utilizes nested structures to store complex data including member names, join dates, and membership details.
- **Dynamic Fee Calculation**: Implements logic-based fee generation based on premium status (₹1500 for premium, ₹500 for standard).
- **File Output**: Writes formatted data to `members.txt` for persistent storage.

### 2. Formatted Data Retrieval (`RecordsRead.c`)

Provides a specialized viewer for transforming raw file data into human-readable format.

- **Clean Formatting**: Employs field-width specifiers (e.g., `%-10s`) to ensure proper column alignment in terminal output.
- **Header Logic**: Intelligently skips metadata and header lines to process only relevant member entries.

### 3. Categorical Filtering (`Category.c`)

Offers search and export functionality for organizing members by subscription type.

- **Interactive Filtering**: Enables user input for specific plans (Weekly, Monthly, or Yearly) to isolate records.
- **Dual Output**: Displays filtered results in the terminal and generates a secondary report file (`planType.txt`).
- **Data Parsing**: Uses `sscanf` and `strcmp` for accurate parsing of string-based data from storage files.

## Technical Implementation

This project implements several advanced C programming techniques:

- **Nested Structures**: Groups related data types to model real-world objects effectively.
- **File Stream Handling**: Manages multiple file pointers for concurrent reading and writing operations.
- **String Logic**: Implements string comparison and formatted buffer reading.
- **Formatted I/O**: Provides precise control over terminal and file output alignment.

## Getting Started

### Prerequisites

- C compiler (e.g., GCC, Clang)
- Standard C libraries (`stdio.h`, `string.h`)

### Installation and Execution

1. **Initialize Records**:
   ```bash
   gcc Recordss.c -o records
   ./records
   ```

2. **View All Members**:
   ```bash
   gcc RecordsRead.c -o read
   ./read
   ```

3. **Filter by Plan**:
   ```bash
   gcc Category.c -o filter
   ./filter
   ```

## File Structure

- `Recordss.c`: Source code for member data entry and storage
- `RecordsRead.c`: Source code for displaying member records in tabular format
- `Category.c`: Source code for filtering and reporting by subscription type
- `members.txt`: Primary database file containing all member records
- `planType.txt`: Filtered report file generated during category searches
