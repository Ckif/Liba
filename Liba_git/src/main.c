#include "libmx.h"

int main(void) {
    // mx_printstr("\n\n----------------MX_PRINT_STRARR-------------------\n");
    //     char *print_strarr[5] = {"abc", "xyz", "ghi", "def", NULL};
    //     mx_printstr("mx_print_strarr return \"abc xyz ghi def\"? | "); mx_print_strarr(print_strarr, " "); mx_printchar('\n');
    //     mx_printstr("mx_print_strarr return \"abc xyz ghi def\"? | "); mx_print_strarr(print_strarr, "/n"); mx_printchar('\n');
    //     mx_printstr("mx_print_strarr return nothing? | "); mx_printchar('\n'); mx_print_strarr(print_strarr, NULL);
    //     mx_printstr("mx_print_strarr return nothing? | "); mx_printchar('\n'); mx_print_strarr(NULL, NULL);
    //     mx_printstr("mx_print_strarr return nothing? | ");mx_printchar('\n');  mx_print_strarr(NULL, " ");

    // mx_printstr("\n\n----------------MX_GET_SUBSTR_INDEX-------------------\n");
    //     mx_printstr("mx_get_substr_index \"2\"? | "); mx_printint(mx_get_substr_index("McDonalds", "Don")); mx_printstr("\n");
    //     mx_printstr("mx_get_substr_index \"3\"? | "); mx_printint(mx_get_substr_index("McDonalds Donuts", "on")); mx_printstr("\n");
    //     mx_printstr("mx_get_substr_index \"-1\"? | "); mx_printint(mx_get_substr_index("McDonalds", "Donatello")); mx_printstr("\n");
    //     mx_printstr("mx_get_substr_index \"-2\"? | "); mx_printint(mx_get_substr_index("McDonalds", NULL)); mx_printstr("\n");
    //     mx_printstr("mx_get_substr_index \"-2\"? | "); mx_printint(mx_get_substr_index(NULL, "Don")); mx_printstr("\n");

    // write(1, "\n\n----------------MX_COUNT_SUBSTR-------------------\n", 53);
    //     char *count_substr = "yo, yo, yo Neo";
    //     mx_printstr("mx_count_substr return \"3\"? | "); mx_printint(mx_count_substr(count_substr, "yo")); mx_printstr("\n");
    //     mx_printstr("mx_count_substr return \"-1\"? (null's check) | "); mx_printint(mx_count_substr(count_substr, NULL)); mx_printstr("\n");
    //     mx_printstr("mx_count_substr return \"-1\"? (null's check) | "); mx_printint(mx_count_substr(NULL, "yo")); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_COUNT_WORDS-------------------\n");
    //     char *count_words = "   follow  *    the   white   rabbit";
    //     mx_printstr("mx_count_words return \"2\"? | "); mx_printint(mx_count_words(count_words, '*')); mx_printstr("\n");
    //     mx_printstr("mx_count_words return \"5\"? | "); mx_printint(mx_count_words(count_words, ' ')); mx_printstr("\n");
    //     mx_printstr("mx_count_words return \"-1\"? (null's check) | "); mx_printint(mx_count_words(NULL, ' ')); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_STRTRIM-------------------\n");
    //     char strtrim[] = "\f    My name... is Neo   \t\r\n ";
    //     char strtrim2[] = "My name... is Neo   \t\n ";
    //     char strtrim3[] = "           \t             \n ";
    //     char *cleared_trim = mx_strtrim(strtrim);
    //     char *cleared_trim2 = mx_strtrim(strtrim2);
    //     char *cleared_trim3 = mx_strtrim(strtrim3);
    //     mx_printstr("mx_strtrim return \"My name... is Neo\"? | "); mx_printstr(cleared_trim); mx_printstr("\n");
    //     mx_printstr("mx_strtrim return \"My name... is Neo\"? | "); mx_printstr(cleared_trim2); mx_printstr("\n");
    //     mx_printstr("mx_strtrim return \"\"? | "); printf("\"%s\"\n", cleared_trim3);
    //     mx_printstr("mx_strtrim return (null)? | "); printf("%s\n", mx_strtrim(NULL));

    // mx_printstr("\n\n----------------MX_DEL_EXTRA_SPACES-------------------\n");
    //     char del_spaces[] = "\f    My name...      is    \r  Neo   \t\n ";
    //     char del_spaces2[] = "           \t             \n ";
    //     char *cleared_del_spaces = mx_del_extra_spaces(del_spaces), *cleared_del_spaces2 = mx_del_extra_spaces(del_spaces2);
    //     mx_printstr("mx_del_extra_spaces return \"My name... is Neo\"? | "); mx_printstr(cleared_del_spaces); mx_printstr("\n");
    //     mx_printstr("mx_del_extra_spaces return \"\"? | "); printf("\"%s\"\n", cleared_del_spaces2);
    //     mx_printstr("mx_del_extra_spaces return (null)? | "); printf("%s\n", mx_del_extra_spaces(NULL));

    // mx_printstr("\n\n----------------MX_STRSPLIT-------------------\n");
    //     char strsplit[] = "**Good bye,**Mr.*Anderson.****";
    //     char **splited = mx_strsplit(strsplit, '*');
    //     char strsplit2[] = "       Knock, knock,         Neo.         ";
    //     char **splited2 = mx_strsplit(strsplit2, ' ');
    //     char **splited3 = mx_strsplit(NULL, ' ');
    //     mx_printstr("mx_strsolit return is \"Good bye,\" \"Mr.\" \"Anderson.\" (null)? | "); printf("\"%s\"  \"%s\"  \"%s\" \"%s\"\n", splited[0], splited[1], splited[2], splited[3]); 
    //     mx_printstr("mx_strsolit return is \"Knock,\" \"knock,\" \"Neo.\" (null)? | "); printf("\"%s\"  \"%s\"  \"%s\" \"%s\"\n", splited2[0], splited2[1], splited2[2], splited2[3]); 
    //     mx_printstr("mx_strsolit return (null)? | "); printf("%s\n", (char *)splited3);

        // mx_printstr("\n\n----------------MX_STRJOIN-------------------\n");
        // char *strjoin1 = "this", *strjoin2 = "dodge ", *strjoin3 = NULL;
        // char *strjoin_result1 = mx_strjoin(strjoin2, strjoin1);
        // char *strjoin_result2 = mx_strjoin(strjoin1, strjoin3);
        // char *strjoin_result3 = mx_strjoin(strjoin3, strjoin2);
        // char *strjoin_result4 = mx_strjoin(strjoin3, strjoin3);
        // mx_printstr("mx_strjoin return \"dodge this\"? | "); mx_printstr(strjoin_result1); mx_printstr("\n");
        // mx_printstr("mx_strjoin return \"this\"? | "); mx_printstr(strjoin_result2); mx_printstr("\n");
        // mx_printstr("mx_strjoin return \"dodge \"? | "); mx_printstr(strjoin_result3); mx_printstr("\n");
        // mx_printstr("mx_strjoin return \"(null)\"? | "); printf("%s\n", strjoin_result4);

    // int main(int argc, char *argv[]) { //MX_FILE_TO_STR
    //     mx_printstr("\n\n----------------MX_FILE_TO_STR-------------------\n"); // HOW TO CHECK??????????
    //         mx_printstr("check function with ./test 4gvl1\n");
    //         if (argc > 1) {
    //             char *file_to_str = mx_file_to_str(argv[1]);
    //             mx_printstr(file_to_str);
    //         }
    //     return 0;
    // }

    mx_printstr("\n\n----------------MX_REPLACE_SUBSTR-------------------\n");
        char replace_substr1[] = "McDonalds";
        char replace_substr2[] = "Ururu turu";
        char *repleced1 = mx_replace_substr(replace_substr1, "alds", "uts");
        char *repleced2 = mx_replace_substr(replace_substr2, "ru", "ta");
        char *repleced3 = mx_replace_substr(replace_substr2, NULL, "ta");
        char *repleced4 = mx_replace_substr(NULL, "ru", "ta");
        char *repleced5 = mx_replace_substr(replace_substr2, "ru", NULL);
        mx_printstr("mx_replace_substr return \"McDonuts\"? | "); mx_printstr(repleced1); mx_printstr("\n");
        mx_printstr("mx_replace_substr return \"Utata tuta\"? | "); mx_printstr(repleced2); mx_printstr("\n");
        mx_printstr("mx_replace_substr return \"(null)\"? | "); printf("%s\n", repleced3);
        mx_printstr("mx_replace_substr return \"(null)\"? | "); printf("%s\n", repleced4);
        mx_printstr("mx_replace_substr return \"(null)\"? | "); printf("%s\n", repleced5);




    system ("leaks -q test");
}
