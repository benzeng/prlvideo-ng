
void FUN_1004bd150(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_1011ccc38)();
  (*DAT_1011ccd18)(uVar1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),1,0);
  if (*(int *)(param_2 + 0x10) != 0) {
    (*DAT_1011ccce0)(uVar1,*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  return;
}

