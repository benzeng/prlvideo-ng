
void _xmlParseMisc(long param_1)

{
  while (((((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '<' &&
            (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == '?')) ||
           ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '<' &&
            (((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == '!' &&
              (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == '-')) &&
             (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == '-')))))) ||
          (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == ' ')) ||
         (((8 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20) &&
           (**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 0xb)) ||
          (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\r'))))) {
    if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '<') &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == '?')) {
      _xmlParsePI(param_1);
    }
    else if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == ' ') ||
            (((8 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20) &&
              (**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 0xb)) ||
             (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\r')))) {
      _xmlNextChar(param_1);
    }
    else {
      _xmlParseComment(param_1);
    }
  }
  return;
}

