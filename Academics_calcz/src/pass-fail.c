#include <stdio.h

int main() {
    printf("╔═════════════════════════════════════════════════════╗\n");
    printf("║           EXAM RESULT DECLARATION SYSTEM                    ║\n");
    printf("║                (Pass/Fail Analyzer)                         ║\n");
    printf("╚══════════════════════════════════════════════════════╝\n\n");
    
    int marks1, marks2, marks3;
    int totalMarks, validInput = 1;
    float percentage;
    
    printf("📝 Enter marks (out of 100):\n");
    printf("────────────────────────────────────────────────────────────────\n");
    
   
    printf("Subject 1 marks: ");
    if(scanf("%d", &marks1) != 1) validInput = 0;
    
  
    printf("Subject 2 marks: ");
    if(scanf("%d", &marks2) != 1) validInput = 0;
    
 
    printf("Subject 3 marks: ");
    if(scanf("%d", &marks3) != 1) validInput = 0;
    
    printf("────────────────────────────────────────────────────────────────\n\n");
    
    
    if(!validInput) {
        printf("❌ ERROR: Invalid input! Please enter only numbers.\n");
        return 1;
    }
    

    if(marks1 < 0 || marks1 > 100 || marks2 < 0 || marks2 > 100 || marks3 < 0 || marks3 > 100) {
        printf("❌ ERROR: Marks should be between 0 and 100!\n");
        return 1;
    }
    
  
    totalMarks = marks1 + marks2 + marks3;
    percentage = (float)totalMarks / 3;
    
    printf("📊 MARKS SUMMARY:\n");
    printf("────────────────────────────────────────────────────────────────\n");
    printf("Subject 1: %d/100\n", marks1);
    printf("Subject 2: %d/100\n", marks2);
    printf("Subject 3: %d/100\n", marks3);
    printf("────────────────────────────────────────────────────────────────\n");
    printf("Total Marks: %d/300\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("────────────────────────────────────────────────────────────────\n\n");
    
    printf("🔍 RESULT ANALYSIS:\n");
    printf("────────────────────────────────────────────────────────────────\n");
    

    printf("Subject-wise Performance:\n");
    if(marks1 >= 33) printf("  ✓ Subject 1: Passed (%d%%)\n", marks1);
    else printf("  ✗ Subject 1: Failed (%d%% - Need %d more marks)\n", marks1, 33 - marks1);
    
    if(marks2 >= 33) printf("  ✓ Subject 2: Passed (%d%%)\n", marks2);
    else printf("  ✗ Subject 2: Failed (%d%% - Need %d more marks)\n", marks2, 33 - marks2);
    
    if(marks3 >= 33) printf("  ✓ Subject 3: Passed (%d%%)\n", marks3);
    else printf("  ✗ Subject 3: Failed (%d%% - Need %d more marks)\n", marks3, 33 - marks3);
    
    printf("────────────────────────────────────────────────────────────────\n");
    
    
    char grade;
    if(percentage >= 90) grade = 'A';
    else if(percentage >= 80) grade = 'B';
    else if(percentage >= 70) grade = 'C';
    else if(percentage >= 60) grade = 'D';
    else if(percentage >= 40) grade = 'E';
    else grade = 'F';
    
    printf("Overall Grade: ");
    switch(grade) {
        case 'A': printf("A+ (Excellent!) 🏆\n"); break;
        case 'B': printf("A (Very Good!) 🌟\n"); break;
        case 'C': printf("B+ (Good!) 👍\n"); break;
        case 'D': printf("B (Average) 📚\n"); break;
        case 'E': printf("C (Satisfactory) ✏️\n"); break;
        case 'F': printf("F (Needs Improvement) 📝\n"); break;
    }
    
    printf("────────────────────────────────────────────────────────────────\n\n");
    
    
    printf("🎯 FINAL DECLARATION:\n");
    printf("────────────────────────────────────────────────────────────────\n");
    
    if(marks1 < 33 || marks2 < 33 || marks3 < 33) {
        printf("❌ RESULT: FAILED\n");
        printf("   Reason: Failed in individual subject(s).\n");
        printf("   • Passing marks in each subject: 33\n");
        
        
        if(marks1 < 33) printf("   • Need to improve Subject 1 (got %d, need %d)\n", marks1, 33 - marks1);
        if(marks2 < 33) printf("   • Need to improve Subject 2 (got %d, need %d)\n", marks2, 33 - marks2);
        if(marks3 < 33) printf("   • Need to improve Subject 3 (got %d, need %d)\n", marks3, 33 - marks3);
    }
    else if(percentage < 40) {
        printf("❌ RESULT: FAILED\n");
        printf("   Reason: Insufficient overall percentage.\n");
        printf("   • Required: 40%% minimum\n");
        printf("   • Obtained: %.2f%%\n", percentage);
        printf("   • Need: %.2f%% more\n", 40 - percentage);
    }
    else {
        printf("✅ RESULT: PASSED\n");
        printf("   Congratulations! You have successfully passed the examination.\n");
        
        
        if(percentage >= 75) {
            printf("   🏆 Excellent performance! Keep it up!\n");
        } else if(percentage >= 60) {
            printf("   🌟 Very good performance!\n");
        } else if(percentage >= 50) {
            printf("   👍 Good performance!\n");
        } else {
            printf("   ✏️ You have passed. Work harder next time!\n");
        }
    }
    
    printf("────────────────────────────────────────────────────────────────\n\n");
    
    printf("📈 PERFORMANCE METRICS:\n");
    printf("────────────────────────────────────────────────────────────────\n");
    printf("Highest Score: %d\n", (marks1 > marks2) ? (marks1 > marks3 ? marks1 : marks3) : (marks2 > marks3 ? marks2 : marks3));
    printf("Lowest Score: %d\n", (marks1 < marks2) ? (marks1 < marks3 ? marks1 : marks3) : (marks2 < marks3 ? marks2 : marks3));
    printf("Average Score: %.2f\n", (marks1 + marks2 + marks3) / 3.0);
    printf("────────────────────────────────────────────────────────────────\n\n");
    
    printf("╔═════════════════════════════════════════════════════════╗\n");
    printf("║              Thank you for using the system!                ║\n");
    printf("║           I hope this analysis was helpful! 📊              ║\n");
    printf("╚══════════════════════════════════════════════════════════╝\n");
    
    return 0;
}
