
/* WARNING: Removing unreachable block (ram,0x000100086e99) */
/* WARNING: Removing unreachable block (ram,0x000100086ea7) */
/* WARNING: Removing unreachable block (ram,0x000100086e77) */
/* WARNING: Removing unreachable block (ram,0x000100086eb0) */

undefined8 * FUN_100086de0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  if (DAT_10226c7b8 == 0) {
    DAT_10226c7b8 = FUN_100086f00("QPointer<QObject>",0xffffffffffffffff,1);
  }
  uVar3 = DAT_10226c7b8;
  uVar5 = QVariant::userType();
  if (uVar3 == uVar5) {
    puVar6 = (undefined8 *)QVariant::constData();
    piVar1 = (int *)*puVar6;
    uVar2 = puVar6[1];
    *param_1 = piVar1;
    param_1[1] = uVar2;
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  else {
    cVar4 = QVariant::convert(param_2,(void *)(ulong)uVar3);
    if (cVar4 == '\0') {
      param_1[1] = 0;
      *param_1 = 0;
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
    }
  }
  return param_1;
}

