
void FUN_1004bd1b0(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*(long *)(param_2 + 0x18) != 0) {
    _CGLClearDrawable();
    FUN_1002ade20(*param_1,*(undefined8 *)(param_2 + 0x18));
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  pcVar1 = DAT_1011ccd40;
  if (*(char *)(param_2 + 0x26) != '\0') {
    uVar2 = (*DAT_1011ccc38)();
    (*pcVar1)(uVar2,*(undefined4 *)(param_2 + 8));
    *(undefined1 *)(param_2 + 0x26) = 0;
  }
  return;
}

