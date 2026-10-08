
undefined4
FUN_100b70da0(long param_1,undefined8 param_2,undefined1 param_3,long *param_4,undefined8 param_5,
             undefined8 param_6)

{
  long lVar1;
  QArrayData *pQVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  iVar3 = FUN_100b93cc0(*(undefined4 *)(param_1 + 0x120),&DAT_102314290);
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0x124) = 1;
    iVar3 = FUN_100b71130();
    if (iVar3 == 0) {
      if (((undefined *)*param_4 == PTR_shared_null_1021e1288) ||
         (*(int *)((undefined *)*param_4 + 4) == 0)) {
        QString::toLatin1();
        iVar3 = FUN_100b714c0(param_1,local_40 + *(long *)(local_40 + 0x10),0,param_3,0,param_6,
                              param_2,param_5);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b70f95;
          }
          QArrayData::deallocate(local_40,1,8);
        }
      }
      else {
        QString::toLatin1();
        pQVar2 = local_48;
        lVar1 = *(long *)(local_48 + 0x10);
        QString::toLatin1();
        iVar3 = FUN_100b714c0(param_1,pQVar2 + lVar1,0,param_3,local_50 + *(long *)(local_50 + 0x10)
                              ,param_6,param_2,param_4);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b70efb;
          }
          QArrayData::deallocate(local_50,1,8);
        }
LAB_100b70efb:
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b70f95;
          }
          QArrayData::deallocate(local_48,1,8);
        }
      }
LAB_100b70f95:
      if (iVar3 == 0) {
        local_58 = (QArrayData *)PTR_shared_null_1021e1288;
        uVar4 = FUN_100b6fcb0(param_1,&local_58);
        if (*(int *)local_58 == -1) {
          return uVar4;
        }
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          UNLOCK();
          if (*(int *)local_58 != 0) {
            return uVar4;
          }
          local_31 = 0;
        }
        QArrayData::deallocate(local_58,2,8);
        return uVar4;
      }
      uVar5 = FUN_100b9d570();
      FUN_100df99c0("","License",0,"Couldn\'t activate license by key. Error %s",uVar5);
      goto joined_r0x000100b70fd1;
    }
    uVar5 = FUN_100b9d570();
    pcVar6 = "Can\'t set proxy info  %s";
  }
  else {
    uVar5 = FUN_100b9d570();
    pcVar6 = "Can\'t initialize vzlic library %s";
  }
  FUN_100df99c0("","License",0,pcVar6,uVar5);
joined_r0x000100b70fd1:
  uVar4 = 0x80011000;
  if (iVar3 + 0x12U < 0x1a) {
    uVar4 = *(undefined4 *)(&DAT_101cdc110 + (long)(int)(iVar3 + 0x12U) * 4);
  }
  return uVar4;
}

