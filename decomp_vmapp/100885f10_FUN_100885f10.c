
void FUN_100885f10(long *param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if ((param_1 != (long *)0x0) && (iVar3 = (int)param_1[3] + -1, -1 < iVar3)) {
    lVar5 = (long)iVar3;
    do {
      puVar4 = *(undefined8 **)(*param_1 + lVar5 * 8);
      while (puVar4 != (undefined8 *)0x0) {
        uVar1 = *puVar4;
        puVar4 = (undefined8 *)puVar4[1];
        (*param_2)(uVar1,param_3);
      }
      bVar2 = 0 < lVar5;
      lVar5 = lVar5 + -1;
    } while (bVar2);
  }
  return;
}

