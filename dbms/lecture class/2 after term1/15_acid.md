# DBMS ACID Properties Through a Bank Transfer Example

October 8, 2026·10:19 AM·32m 58s



A DBMS class explains how ACID properties protect bank transfers and connects them to data integrity, concurrency control, and system recovery.

## Atomicity: A transfer completes fully or is rolled back

**Bank transfer example**: A transaction transfers $100 from account X to account Y. It reads both balances, subtracts $100 from X, and adds $100 to Y.

A successful transaction makes the changes permanent; if it fails, its changes are discarded so the transfer is not left half-complete.

The class uses an initial balance of $500 for X and refers to another account holding $200 while illustrating the transfer operations.

## Consistency: Transactions preserve valid data

**Server failure during transfer**: Aryan transfers $10,000 to Sudhanshu, but the receiving bank server goes down after the sender’s balance is deducted. If the receiving balance is not updated when service returns, the money may appear missing or remain pending.

The transfer must preserve the system’s rules and a valid overall balance; an inconsistent result can make both sides of a transaction invalid.

A separate balance example uses $700 as the total and discusses transaction order and before-images. The instructor corrects an erroneous calculation, emphasizing that the arithmetic and account updates must maintain the intended total.

## Isolation: Concurrent transactions should not interfere

Transactions should operate independently, without affecting one another while in progress.

Isolation helps reduce dirty reads; the class raises dirty reads and non-repeatable reads as transaction issues, though the transcript does not capture complete definitions.

## Durability and ACID’s role in DBMS

**Durability**: Once an update succeeds, it must remain stored even if the system later fails; committed changes should not be lost.

ACID properties support data integrity and consistency, concurrency control, and recovery and fault tolerance.

Responsibility was attributed as follows:

Atomicity — transaction manager

Consistency — application manager or programmer

Isolation — concurrency control manager

Durability — recovery agents

## Closing classroom exchanges

The remaining conversation includes attendance and class-cancellation confusion, followed by unrelated student questions about data types, representation, and a function question.

The transcript ends with the phrase “Bookmark design software,” without further context.