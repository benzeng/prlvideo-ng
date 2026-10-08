
undefined1
FUN_100aa8b90(long *param_1,long *param_2,long param_3,undefined4 param_4,int param_5,int param_6)

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
  
  lVar5 = FUN_100c6d320();
  plVar6 = operator_new(0x20);
  *(undefined4 *)(plVar6 + 1) = 1;
  plVar6[2] = lVar5;
  *plVar6 = (long)&PTR_FUN_102281c38;
  plVar6[3] = (long)FUN_100c6d8c0;
  if (lVar5 == 0) {
    uVar3 = 0;
    goto LAB_100aa8f49;
  }
  lVar5 = FUN_100c4a090(param_4,3,0,0);
  if (lVar5 == 0) {
    uVar3 = 0;
    goto LAB_100aa8f49;
  }
  iVar4 = FUN_100c6d510(plVar6[2],6,lVar5);
  if (iVar4 == 0) {
    FUN_100c47630(lVar5);
    uVar3 = 0;
    goto LAB_100aa8f49;
  }
  lVar7 = FUN_100c7cd50();
  plVar8 = operator_new(0x20);
  *(undefined4 *)(plVar8 + 1) = 1;
  plVar8[2] = lVar7;
  *plVar8 = (long)&PTR_FUN_102281880;
  plVar8[3] = (long)FUN_100c7cd70;
  if (lVar7 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_100c96920(lVar7,3);
    uVar9 = FUN_100c926a0(plVar8[2]);
    FUN_100c76820(uVar9,(long)param_5);
    FUN_100c94a50(**(undefined8 **)(*(long *)plVar8[2] + 0x20),0xfffffffffffd5d00);
    FUN_100c94a50(*(undefined8 *)(*(long *)(*(long *)plVar8[2] + 0x20) + 8),(long)param_6 * 0x15180)
    ;
    FUN_100c96ad0(plVar8[2],plVar6[2]);
    if (*(int *)(*param_1 + 4) != 0) {
      lVar7 = FUN_100c92690(plVar8[2]);
      if (lVar7 == 0) {
        uVar3 = 0;
        goto LAB_100aa8f2d;
      }
      if (*(int *)(*param_1 + 4) != 0) {
        QString::toLatin1();
        FUN_100c971b0(lVar7,0xd,0x1001,local_40 + *(long *)(local_40 + 0x10),0xffffffff,0xffffffff,0
                     );
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100aa8d6e;
          }
          QArrayData::deallocate(local_40,1,8);
        }
      }
LAB_100aa8d6e:
      if (*(int *)(*param_2 + 4) != 0) {
        QString::toLatin1();
        FUN_100c971b0(lVar7,400,0x1001,local_48 + *(long *)(local_48 + 0x10),0xffffffff,0xffffffff,0
                     );
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100aa8de5;
          }
          QArrayData::deallocate(local_48,1,8);
        }
      }
LAB_100aa8de5:
      FUN_100c971b0(lVar7,0x11,0x1001,"Parallels",0xffffffff,0xffffffff,0);
      FUN_100c971b0(lVar7,0x12,0x1001,"Mobile",0xffffffff,0xffffffff,0);
    }
    lVar7 = plVar8[2];
    lVar2 = plVar6[2];
    uVar9 = FUN_100c6ca00();
    iVar4 = FUN_100c9a200(lVar7,lVar2,uVar9);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      FUN_100aaaea0(&local_50,plVar8[2]);
      QByteArray::operator=((QByteArray *)(param_3 + 8),(QByteArray *)&local_50);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100aa8eaf;
        }
        QArrayData::deallocate(local_50,1,8);
      }
LAB_100aa8eaf:
      FUN_100aaac10(&local_58,lVar5);
      QByteArray::operator=((QByteArray *)(param_3 + 0x10),(QByteArray *)&local_58);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100aa8efd;
        }
        QArrayData::deallocate(local_58,1,8);
      }
LAB_100aa8efd:
      uVar3 = FUN_100a74fe0(param_3);
    }
  }
LAB_100aa8f2d:
  LOCK();
  plVar1 = plVar8 + 1;
  lVar5 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar5 == 1) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
LAB_100aa8f49:
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

