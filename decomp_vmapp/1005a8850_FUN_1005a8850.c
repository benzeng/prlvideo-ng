
int FUN_1005a8850(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  long *plVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  int local_7c;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar1 = (undefined4)param_1[8];
  *(undefined4 *)(param_1 + 8) = 10;
  local_7c = 0;
  switch(uVar1) {
  case 4:
  case 7:
    for (plVar4 = (long *)param_1[3]; plVar4 != param_1 + 3; plVar4 = (long *)*plVar4) {
      iVar2 = (int)plVar4[-1];
      if (iVar2 != 3) {
        if (iVar2 == 7) {
          iVar2 = (**(code **)(*param_1 + 0x88))(param_1,plVar4[-2]);
          if (iVar2 < 0) {
            pcVar3 = "Unrolling commit stage 2 failed with code 0x%x";
          }
          else {
            *(undefined4 *)(plVar4 + -1) = 5;
LAB_1005a88ed:
            iVar2 = (**(code **)(*param_1 + 0x90))(param_1,plVar4[-2]);
            if (-1 < iVar2) goto LAB_1005a8909;
            pcVar3 = "Unrolling commit stage 1 failed with code 0x%x";
          }
          FUN_1008e3970("","vdisk",0,pcVar3,iVar2);
          local_7c = iVar2;
          goto LAB_1005a8c72;
        }
        if (iVar2 == 4) {
LAB_1005a8909:
          *(undefined4 *)(plVar4 + -1) = 3;
        }
        else if (iVar2 - 5U < 2) goto LAB_1005a88ed;
      }
    }
  case 2:
  case 3:
    plVar4 = (long *)param_1[3];
    while (plVar4 != param_1 + 3) {
      if ((*(uint *)(plVar4 + -1) & 0xfffffffe) == 2) {
        iVar2 = (**(code **)(*param_1 + 0x98))(param_1,plVar4[-2]);
        if (iVar2 < 0) {
          FUN_1008e3970("","vdisk",0,"Unrolling execute failed with code 0x%x",iVar2);
          local_7c = iVar2;
LAB_1005a8c72:
          *(undefined1 *)(param_1 + 10) = 1;
          break;
        }
        *(undefined4 *)(plVar4 + -1) = 1;
LAB_1005a89c0:
        plVar4 = (long *)*plVar4;
      }
      else {
        FUN_1005a9cd0(&local_48,uVar1);
        QString::toLocal8Bit();
        pQVar5 = local_40 + *(long *)(local_40 + 0x10);
        FUN_1005a9cd0(&local_58,(int)plVar4[-1]);
        QString::toLocal8Bit();
        pQVar6 = local_50 + *(long *)(local_50 + 0x10);
        (**(code **)(*param_1 + 0xa0))(&local_68,param_1,plVar4[-2]);
        QString::toLocal8Bit();
        FUN_1008e3970("","vdisk",0,
                      "Unroll [%s] stage Processing: strange element state [%s] at element %s",
                      pQVar5,pQVar6,local_60 + *(long *)(local_60 + 0x10));
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005a8ad0;
          }
          QArrayData::deallocate(local_60,1,8);
        }
LAB_1005a8ad0:
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005a8b00;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_1005a8b00:
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005a8b33;
          }
          QArrayData::deallocate(local_50,1,8);
        }
LAB_1005a8b33:
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005a8b63;
          }
          QArrayData::deallocate(local_58,2,8);
        }
LAB_1005a8b63:
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005a8b97;
          }
          QArrayData::deallocate(local_40,1,8);
        }
LAB_1005a8b97:
        if (*(int *)local_48 == -1) goto LAB_1005a89c0;
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005a89c0;
        }
        QArrayData::deallocate(local_48,2,8);
        plVar4 = (long *)*plVar4;
      }
    }
  case 1:
    (**(code **)(*param_1 + 0xa8))(param_1,1);
    (**(code **)(*param_1 + 0xd8))(param_1);
    (**(code **)(*param_1 + 0xf0))(param_1);
    break;
  default:
    FUN_1005a9cd0(&local_78,uVar1);
    QString::toLocal8Bit();
    FUN_1008e3970("","vdisk",0,"Invalid class state at rollback call: %s",
                  local_70 + *(long *)(local_70 + 0x10));
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005a8983;
      }
      QArrayData::deallocate(local_70,1,8);
    }
LAB_1005a8983:
    if (*(int *)local_78 == -1) {
      local_7c = -0x7ffffaea;
    }
    else {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        UNLOCK();
        if (*(int *)local_78 != 0) {
          return -0x7ffffaea;
        }
        local_31 = 0;
      }
      local_7c = -0x7ffffaea;
      QArrayData::deallocate(local_78,2,8);
    }
    break;
  case 8:
  case 9:
    break;
  }
  return local_7c;
}

