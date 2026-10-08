
/* WARNING: Removing unreachable block (ram,0x00010030492f) */
/* WARNING: Removing unreachable block (ram,0x00010030493d) */
/* WARNING: Removing unreachable block (ram,0x0001003048b2) */
/* WARNING: Removing unreachable block (ram,0x000100304946) */

undefined8 * FUN_1003047c0(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uStack_4c;
  Data_conflict local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_29;
  
  if (DAT_102271690 == 0) {
    DAT_102271690 = FUN_1002032b0("CSlotInfo",0xffffffffffffffff,1);
  }
  uVar3 = DAT_102271690;
  uVar5 = QVariant::userType();
  if (uVar3 == uVar5) {
    puVar6 = (undefined8 *)QVariant::constData();
    piVar2 = (int *)*puVar6;
    uVar1 = puVar6[1];
    *param_1 = piVar2;
    param_1[1] = uVar1;
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_29 = *piVar2 != 0;
      UNLOCK();
    }
    uVar1 = puVar6[2];
    param_1[3] = puVar6[3];
    param_1[2] = uVar1;
    QVariant::QVariant((QVariant *)(param_1 + 4),(QVariant *)(puVar6 + 4));
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(puVar6 + 6);
  }
  else {
    local_40 = 0x80000000;
    local_48.field7 = 0;
    local_38 = 1;
    cVar4 = QVariant::convert(param_2,(void *)(ulong)uVar3);
    if (cVar4 == '\0') {
      *(undefined4 *)(param_1 + 3) = 0;
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined4 *)(param_1 + 5) = 0x80000000;
      param_1[4] = 0;
      *(undefined1 *)(param_1 + 6) = 1;
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[3] = (ulong)uStack_4c << 0x20;
      param_1[2] = 0;
      QVariant::QVariant((QVariant *)(param_1 + 4),(QVariant *)&local_48);
      *(undefined1 *)(param_1 + 6) = local_38;
    }
    QVariant::~QVariant((QVariant *)&local_48);
  }
  return param_1;
}

