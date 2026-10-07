
void FUN_1003e2fd0(long *param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1[0xb];
  bVar2 = *(byte *)(lVar1 + 9) >> 6;
  if (bVar2 == 2) {
    if ((99 < *(byte *)(lVar1 + 5)) && (*(byte *)(lVar1 + 5) != 0xaa)) {
LAB_1003e301b:
                    /* WARNING: Could not recover jumptable at 0x0001003e302f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
      return;
    }
  }
  else if ((bVar2 == 1) &&
          (((99 < *(byte *)(lVar1 + 3) || (0x3b < *(byte *)(lVar1 + 4))) ||
           (0x4a < *(byte *)(lVar1 + 5))))) goto LAB_1003e301b;
  *(undefined4 *)(param_1 + 0x12) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001003e303f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))();
  return;
}

