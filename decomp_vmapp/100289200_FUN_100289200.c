
void FUN_100289200(undefined8 *param_1)

{
  param_1[-0xd] = &PTR_FUN_100bb0900;
  param_1[-0xc] = &PTR_metaObject_100bb09f8;
  *param_1 = &PTR_FUN_100bb0a70;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  DAT_100bfb114 = 0;
  DAT_100bfb12d = DAT_100bfb12d | 1;
  FUN_100286ec0(param_1 + -0xd);
  operator_delete(param_1 + -0xd);
  return;
}

