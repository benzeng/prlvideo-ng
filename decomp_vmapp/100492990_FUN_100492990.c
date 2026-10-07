
undefined4 FUN_100492990(undefined8 param_1,char param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  QArrayData *pQVar5;
  undefined8 uVar6;
  QArrayData *pQVar7;
  long *local_80;
  QArrayData *local_78;
  undefined *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined *local_50;
  undefined *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar5 = (QArrayData *)QString::fromAscii_helper("prl_snapshot",0xc);
  local_48 = PTR_shared_null_100ba2188;
  local_50 = PTR_shared_null_100ba2188;
  local_40 = pQVar5;
  if (param_2 == '\0') {
    if (DAT_1011bbff4 < 1) {
      pQVar7 = (QArrayData *)QString::fromAscii_helper("stop",4);
      local_58 = pQVar7;
      FUN_10000c490(&local_48,&local_58);
      uVar4 = 2;
      if (*(int *)pQVar7 != -1) {
        if (*(int *)pQVar7 != 0) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100492b2a;
        }
        QArrayData::deallocate(pQVar7,2,8);
      }
    }
    else {
      local_60 = (QArrayData *)PTR_shared_null_100ba20d0;
      uVar6 = QString::sprintf((char *)&local_60,"%d");
      FUN_10000c490(&local_48,uVar6);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100492a72;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100492a72:
      pQVar7 = (QArrayData *)QString::fromAscii_helper("15",2);
      local_68 = pQVar7;
      FUN_10000c490(&local_48,&local_68);
      if (*(int *)pQVar7 != -1) {
        if (*(int *)pQVar7 != 0) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100492ac2;
        }
        QArrayData::deallocate(pQVar7,2,8);
      }
LAB_100492ac2:
      DAT_1011bbff4 = 0;
      uVar4 = 8;
    }
  }
  else {
    uVar4 = 2;
    if (0 < DAT_1011bbff4) {
      uVar4 = 0x80034002;
      FUN_1008e3970("TCHOST","ToolsCenterHost",0,"Guest file system is already freezed.");
      goto LAB_100492c34;
    }
  }
LAB_100492b2a:
  local_70 = PTR_shared_null_100ba20d0;
  pQVar7 = (QArrayData *)QString::fromAscii_helper("FAKE_SESSION_UUID",0x11);
  param_3 = (long *)*param_3;
  if (param_3 != (long *)0x0) {
    LOCK();
    *(int *)(param_3 + 1) = (int)param_3[1] + 1;
    UNLOCK();
  }
  local_80 = param_3;
  local_78 = pQVar7;
  uVar4 = FUN_100486cb0(param_1,&local_78,&local_40,&local_48,&local_50,0x3800,&local_80,&local_70,
                        FUN_100492e60,uVar4);
  if (param_3 != (long *)0x0) {
    LOCK();
    plVar1 = param_3 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*param_3 + 0x10))(param_3);
    }
  }
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100492bfa;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_100492bfa:
  puVar3 = PTR_shared_null_100ba20d0;
  if (*(int *)PTR_shared_null_100ba20d0 != -1) {
    if (*(int *)PTR_shared_null_100ba20d0 != 0) {
      LOCK();
      *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
      local_31 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100492c34;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,2,8);
  }
LAB_100492c34:
  FUN_100013180(&local_50);
  FUN_100013180(&local_48);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return uVar4;
      }
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
  return uVar4;
}

