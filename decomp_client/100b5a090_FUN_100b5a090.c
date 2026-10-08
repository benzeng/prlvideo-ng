
undefined8 * FUN_100b5a090(undefined8 *param_1,int param_2,char param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  QString local_30;
  char local_28;
  undefined7 uStack_27;
  undefined1 local_19;
  
  if (param_2 == 1) {
    if (param_3 == '\0') {
      pcVar4 = "1|1|dda47b44f2614b04cbaa649ea54213d4e451709e";
    }
    else {
      pcVar4 = "0|1|7a4342575153757fe359779b26641a7d8553d9a3";
    }
    uVar2 = QString::fromAscii_helper(pcVar4,0x2c);
    *param_1 = uVar2;
    return param_1;
  }
  FUN_100b5a210(&local_30);
  iVar3 = 0x1ed7af2;
  if (param_3 != '\0') {
    iVar3 = 0x1ed7aee;
  }
  QString::fromUtf8_helper(&local_28,iVar3);
  QString::append(&local_30);
  piVar1 = (int *)CONCAT71(uStack_27,local_28);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_19 = *piVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100b5a125;
    }
    QArrayData::deallocate((QArrayData *)CONCAT71(uStack_27,local_28),2,8);
  }
LAB_100b5a125:
  *param_1 = local_30.field0_0x0;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_28 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return param_1;
      }
      local_28 = '\0';
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return param_1;
}

