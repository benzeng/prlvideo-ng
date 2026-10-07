
bool FUN_10082a960(byte *param_1)

{
  if ((((*param_1 == (&DAT_100b521b0)[*param_1]) && (param_1[1] == (&DAT_100b521b0)[param_1[1]])) &&
      (param_1[2] == (&DAT_100b521b0)[param_1[2]])) &&
     (((param_1[3] == (&DAT_100b521b0)[param_1[3]] && (param_1[4] == (&DAT_100b521b0)[param_1[4]]))
      && ((param_1[5] == (&DAT_100b521b0)[param_1[5]] &&
          (param_1[6] == (&DAT_100b521b0)[param_1[6]])))))) {
    return param_1[7] == (&DAT_100b521b0)[param_1[7]];
  }
  return false;
}

