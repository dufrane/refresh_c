void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);

int main(int argc, char *argv[]) {
    char *buf;

    if (argc < 2)
        return 0;
    for (int i = 1; i < argc; ++i) {
        for (int j = i; j < argc; ++j) {
            if (mx_strcmp(argv[i], argv[j]) > 0) {
                buf = argv[j];
                argv[j] = argv[i];
                argv[i] = buf;
            }
        }
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
    return 0;
}
