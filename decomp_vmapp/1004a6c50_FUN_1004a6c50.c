
void FUN_1004a6c50(long param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  QArrayData *pQVar6;
  char cVar7;
  byte bVar8;
  long lVar9;
  bool bVar10;
  QArrayData *local_90;
  QArrayData *local_88;
  long *local_80;
  undefined4 local_78;
  uint local_74;
  undefined4 local_70;
  undefined4 local_6c;
  QArrayData *local_68;
  undefined4 local_60 [2];
  QArrayData *local_58;
  uint local_50 [2];
  undefined1 local_48 [16];
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar4 = *param_2;
  uVar2 = *(uint *)(lVar4 + 4);
  local_38 = lVar3;
  if (uVar2 < 0x10) goto LAB_1004a709a;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (*(int *)(lVar4 + lVar5) != 0x20000) {
    FUN_1008e3970("SIAHOST","SIAServer",0,"Incorrect SIA version: 0x%08X (need 0x%08X)",
                  *(int *)(lVar4 + lVar5),0x20000);
    return;
  }
  switch(*(undefined4 *)(lVar5 + 4 + lVar4)) {
  case 2:
    if (uVar2 != 0x10) {
      FUN_1004a68b0(param_1,lVar5 + 0x10 + lVar4,uVar2 - 0x10,*(undefined4 *)(lVar5 + 8 + lVar4));
      return;
    }
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("SIAHOST","SIAServer",2,"kSIACmd_OpenURL command: empty url string received");
      return;
    }
    break;
  default:
    FUN_1008e3970("SIAHOST","SIAServer",0,"Invalid SIA command received from client: 0x%08X");
    return;
  case 7:
    local_78 = 0x20000;
    local_74 = (uint)*(byte *)(param_1 + 0xa8);
    local_70 = 0;
    local_6c = 0x10;
    FUN_100434830(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0xf0),0x1896d,&local_78,0x10,
                  &DAT_1011ccb98,0);
    break;
  case 9:
    if (uVar2 < 0x34) break;
    FUN_1007d6870(local_48);
    FUN_1007ea1d0(local_48,lVar5 + 0x10 + lVar4);
    QMutex::lock();
    FUN_1007d6a70(&local_88,local_48);
    FUN_1004a8100(&local_80,param_1 + 0x90,&local_88);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        UNLOCK();
        local_78 = CONCAT31(local_78._1_3_,*(int *)local_88 != 0);
        if (*(int *)local_88 != 0) goto LAB_1004a6e5c;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1004a6e5c:
    QMutex::unlock();
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x18))(local_80,param_2);
      LOCK();
      plVar1 = local_80 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
    break;
  case 0xb:
    if (uVar2 < 0x1c) break;
    *(undefined4 *)(param_1 + 0xa9) = *(undefined4 *)(lVar5 + 0x10 + lVar4);
    if (*(long *)(*(long *)(param_1 + 0x38) + 0x110) == 0) {
LAB_1004a702d:
      CVmTools::getVmSharedApplications();
      bVar8 = CVmSharedApplications::isStoreInternetPasswordsInOSXKeychain();
      local_50[0] = (uint)bVar8 << 3 | *(uint *)(lVar4 + 0x10 + lVar5);
      QByteArray::QByteArray((QByteArray *)&local_58,(char *)local_50,4);
      FUN_1000488f0(4,(QByteArray *)&local_58);
      if (*(int *)local_58 == -1) break;
      local_68 = local_58;
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        bVar10 = *(int *)local_58 != 0;
        UNLOCK();
        local_78 = CONCAT31(local_78._1_3_,bVar10);
joined_r0x0001004a7085:
        if (bVar10) break;
      }
    }
    else {
      CVmConfiguration::getVmSettings();
      lVar9 = CVmSettings::getVmTools();
      if ((lVar9 == 0) || (cVar7 = CVmTools::isIsolatedVm(), cVar7 == '\0')) goto LAB_1004a702d;
      local_60[0] = 0;
      QByteArray::QByteArray((QByteArray *)&local_68,(char *)local_60,4);
      FUN_1000488f0(4,(QByteArray *)&local_68);
      if (*(int *)local_68 == -1) break;
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        bVar10 = *(int *)local_68 != 0;
        UNLOCK();
        local_78 = CONCAT31(local_78._1_3_,bVar10);
        goto joined_r0x0001004a7085;
      }
    }
    QArrayData::deallocate(local_68,1,8);
    break;
  case 0xc:
    local_90 = (QArrayData *)PTR_shared_null_100ba20d0;
    QMutex::lock();
    pQVar6 = *(QArrayData **)(param_1 + 0xa0);
    *(undefined **)(param_1 + 0xa0) = PTR_shared_null_100ba20d0;
    local_90 = pQVar6;
    QMutex::unlock();
    if (*(int *)(pQVar6 + 4) != 0) {
      FUN_1004a5e40(param_1,&local_90);
    }
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        UNLOCK();
        local_78 = CONCAT31(local_78._1_3_,*(int *)pQVar6 != 0);
        if (*(int *)pQVar6 != 0) break;
      }
      QArrayData::deallocate(pQVar6,1,8);
    }
  }
LAB_1004a709a:
  if (lVar3 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

