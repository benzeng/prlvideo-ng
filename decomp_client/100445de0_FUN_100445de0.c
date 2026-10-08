
void FUN_100445de0(long *param_1)

{
  long lVar1;
  
  lVar1 = QDialogButtonBox::button(*(undefined8 *)(param_1[0xc] + 0x28),0x400);
  if ((*(byte *)(*(long *)(lVar1 + 0x28) + 8) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100445e11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1b8))(param_1);
    return;
  }
  return;
}

