
undefined1
FUN_1007ce3b0(long *param_1,long *param_2,long param_3,undefined4 param_4,int param_5,int param_6)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar5 = FUN_100891f40();
  plVar6 = operator_new(0x20);
  *(undefined4 *)(plVar6 + 1) = 1;
  plVar6[2] = lVar5;
  *plVar6 = (long)&PTR_FUN_1011a5fc8;
  plVar6[3] = (long)FUN_1008924e0;
  if (lVar5 == 0) {
    uVar3 = 0;
    goto LAB_1007ce769;
  }
  lVar5 = FUN_10086ee90(param_4,3,0,0);
  if (lVar5 == 0) {
    uVar3 = 0;
    goto LAB_1007ce769;
  }
  iVar4 = FUN_100892130(plVar6[2],6,lVar5);
  if (iVar4 == 0) {
    FUN_10086c430(lVar5);
    uVar3 = 0;
    goto LAB_1007ce769;
  }
  lVar7 = FUN_1008a17d0();
  plVar8 = operator_new(0x20);
  *(undefined4 *)(plVar8 + 1) = 1;
  plVar8[2] = lVar7;
  *plVar8 = (long)&PTR_FUN_1011a5c10;
  plVar8[3] = (long)FUN_1008a17f0;
  if (lVar7 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_1008bb3a0(lVar7,3);
    uVar9 = FUN_1008b7120(plVar8[2]);
    FUN_10089b2a0(uVar9,(long)param_5);
    FUN_1008b94d0(**(undefined8 **)(*(long *)plVar8[2] + 0x20),0xfffffffffffd5d00);
    FUN_1008b94d0(*(undefined8 *)(*(long *)(*(long *)plVar8[2] + 0x20) + 8),(long)param_6 * 0x15180)
    ;
    FUN_1008bb550(plVar8[2],plVar6[2]);
    if (*(int *)(*param_1 + 4) != 0) {
      lVar7 = FUN_1008b7110(plVar8[2]);
      if (lVar7 == 0) {
        uVar3 = 0;
        goto LAB_1007ce74d;
      }
      if (*(int *)(*param_1 + 4) != 0) {
        QString::toLatin1();
        FUN_1008bbc30(lVar7,0xd,0x1001,local_40 + *(long *)(local_40 + 0x10),0xffffffff,0xffffffff,0
                     );
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007ce58e;
          }
          QArrayData::deallocate(local_40,1,8);
        }
      }
LAB_1007ce58e:
      if (*(int *)(*param_2 + 4) != 0) {
        QString::toLatin1();
        FUN_1008bbc30(lVar7,400,0x1001,local_48 + *(long *)(local_48 + 0x10),0xffffffff,0xffffffff,0
                     );
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007ce605;
          }
          QArrayData::deallocate(local_48,1,8);
        }
      }
LAB_1007ce605:
      FUN_1008bbc30(lVar7,0x11,0x1001,"Parallels",0xffffffff,0xffffffff,0);
      FUN_1008bbc30(lVar7,0x12,0x1001,"Mobile",0xffffffff,0xffffffff,0);
    }
    lVar7 = plVar8[2];
    lVar2 = plVar6[2];
    uVar9 = FUN_100891760();
    iVar4 = FUN_1008bec80(lVar7,lVar2,uVar9);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      FUN_1007d06c0(&local_50,plVar8[2]);
      QByteArray::operator=((QByteArray *)(param_3 + 8),(QByteArray *)&local_50);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007ce6cf;
        }
        QArrayData::deallocate(local_50,1,8);
      }
LAB_1007ce6cf:
      FUN_1007d0430(&local_58,lVar5);
      QByteArray::operator=((QByteArray *)(param_3 + 0x10),(QByteArray *)&local_58);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007ce71d;
        }
        QArrayData::deallocate(local_58,1,8);
      }
LAB_1007ce71d:
      uVar3 = FUN_10079a650(param_3);
    }
  }
LAB_1007ce74d:
  LOCK();
  plVar1 = plVar8 + 1;
  lVar5 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar5 == 1) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
LAB_1007ce769:
  LOCK();
  plVar8 = plVar6 + 1;
  lVar5 = *plVar8;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)lVar5 == 1) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return uVar3;
}

