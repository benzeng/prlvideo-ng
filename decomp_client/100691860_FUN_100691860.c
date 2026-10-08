
void FUN_100691860(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  int *local_38;
  undefined8 uStack_30;
  bool local_21;
  
  if (param_2 == 0xc) {
    if ((param_3 == 0) || (param_3 == 1)) {
      if (*(int *)param_4[1] != 0) goto LAB_10069197c;
      iVar2 = DAT_10226c7b8;
      if (DAT_10226c7b8 == 0) {
        iVar2 = FUN_100086f00("QPointer<QObject>",0xffffffffffffffff,1);
        DAT_10226c7b8 = iVar2;
      }
    }
    else {
      if ((param_3 != 2) || (*(int *)param_4[1] != 0)) {
LAB_10069197c:
        *(undefined4 *)*param_4 = 0xffffffff;
        return;
      }
      iVar2 = FUN_100691e00();
    }
    *(int *)*param_4 = iVar2;
    return;
  }
  if (param_2 != 0) {
    return;
  }
  if (param_3 == 2) {
    FUN_100691080(param_1,*(undefined8 *)param_4[1]);
    return;
  }
  if (param_3 != 1) {
    if (param_3 != 0) {
      return;
    }
    piVar3 = *(int **)param_4[1];
    uStack_30 = ((undefined8 *)param_4[1])[1];
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_21 = *piVar3 != 0;
      UNLOCK();
    }
    local_38 = piVar3;
    FUN_100690f20(param_1,&local_38);
    if (piVar3 == (int *)0x0) {
      return;
    }
    LOCK();
    *piVar3 = *piVar3 + -1;
    iVar2 = *piVar3;
    UNLOCK();
    goto LAB_1006919da;
  }
  piVar3 = *(int **)param_4[1];
  lVar1 = ((undefined8 *)param_4[1])[1];
  if (piVar3 == (int *)0x0) {
LAB_100691901:
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "! context.isNull()","ActionManager/CActionManager.cpp",100,
                  "onBeforeContextRemoved");
    if (piVar3 == (int *)0x0) {
      return;
    }
    iVar2 = piVar3[1];
  }
  else {
    LOCK();
    *piVar3 = *piVar3 + 1;
    local_21 = *piVar3 != 0;
    UNLOCK();
    if ((lVar1 == 0) || (iVar2 = piVar3[1], iVar2 == 0)) goto LAB_100691901;
  }
  if ((lVar1 != 0) && (iVar2 != 0)) {
    FUN_1006934b0(*(undefined8 *)(param_1 + 0x18),lVar1);
  }
  LOCK();
  *piVar3 = *piVar3 + -1;
  iVar2 = *piVar3;
  UNLOCK();
LAB_1006919da:
  local_21 = iVar2 != 0;
  if (!local_21) {
    operator_delete(piVar3);
  }
  return;
}

