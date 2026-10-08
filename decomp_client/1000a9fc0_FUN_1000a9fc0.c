
undefined1 FUN_1000a9fc0(long param_1,long *param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar7;
  QArrayData *local_30;
  QArrayData *local_28;
  
  uVar7 = (undefined4)((ulong)in_stack_ffffffffffffffc8 >> 0x20);
  if (*(int *)(*param_2 + 4) == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAD","prl_client_app",0,"Error: vmUuid=\"%s\" is invalid (psn={%u, %u})",
                  local_28 + *(long *)(local_28 + 0x10),*param_3,CONCAT44(uVar7,param_3[1]));
    if (*(int *)local_28 == -1) {
      return 0;
    }
    local_30 = local_28;
    if (*(int *)local_28 == 0) goto LAB_1000aa10f;
    LOCK();
    *(int *)local_28 = *(int *)local_28 + -1;
    iVar2 = *(int *)local_28;
    UNLOCK();
  }
  else {
    if ((*param_3 != 0) || (param_3[1] != 0)) {
      plVar4 = (long *)FUN_1000aa770(param_1 + 0x18);
      lVar5 = *plVar4;
      iVar2 = *(int *)(lVar5 + 0xc);
      iVar3 = *(int *)(lVar5 + 8);
      if ((iVar3 < iVar2) && (iVar3 != iVar2)) {
        puVar1 = (undefined8 *)(lVar5 + 0x10 + (long)iVar3 * 8);
        lVar5 = (long)iVar2 * 8 + (long)iVar3 * -8;
        puVar6 = puVar1;
        do {
          if ((((int *)*puVar6)[1] == param_3[1]) && (*(int *)*puVar6 == *param_3)) {
            if (-1 < (int)((ulong)((long)puVar6 - (long)puVar1) >> 3)) {
              return 0;
            }
            break;
          }
          puVar6 = puVar6 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
      FUN_1000aaa10(plVar4,param_3);
      return 1;
    }
    QString::toUtf8();
    FUN_100df99c0("SGAD","prl_client_app",0,"Error: psn={%u, %u} is invalid (vmUuid=\"%s\")",0,0,
                  local_30 + *(long *)(local_30 + 0x10));
    if (*(int *)local_30 == -1) {
      return 0;
    }
    if (*(int *)local_30 == 0) goto LAB_1000aa10f;
    LOCK();
    *(int *)local_30 = *(int *)local_30 + -1;
    iVar2 = *(int *)local_30;
    UNLOCK();
  }
  if (iVar2 != 0) {
    return 0;
  }
LAB_1000aa10f:
  QArrayData::deallocate(local_30,1,8);
  return 0;
}

