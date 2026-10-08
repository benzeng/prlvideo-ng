
void FUN_100817100(long *param_1,int param_2,int param_3,long *param_4)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  int *piVar4;
  QString local_28;
  undefined1 local_19;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_100252510(param_1,*(undefined4 *)param_4[1]);
      return;
    case 1:
      FUN_100252630(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      FUN_100252690(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_1002526f0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      FUN_100252c60(param_1);
      return;
    case 5:
      FUN_1002511b0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 6:
      FUN_1002514a0(param_1,*(undefined4 *)param_4[1],param_4[2],*(undefined4 *)param_4[3]);
      return;
    case 7:
      uVar3 = (**(code **)(*param_1 + 0x108))(param_1,param_4[1]);
      if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
        *(undefined8 *)*param_4 = uVar3;
        return;
      }
      return;
    case 8:
      (**(code **)(*param_1 + 0x110))(&local_28,param_1);
      if ((QString *)*param_4 != (QString *)0x0) {
        QString::operator=((QString *)*param_4,&local_28);
      }
      if (*(int *)local_28.field0_0x0 != -1) {
        if (*(int *)local_28.field0_0x0 != 0) {
          LOCK();
          *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_28.field0_0x0 != 0) {
            return;
          }
          local_19 = 0;
        }
        QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
        return;
      }
      return;
    case 9:
                    /* WARNING: Could not recover jumptable at 0x000100817348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x118))
                (param_1,*(undefined4 *)param_4[1],(undefined4 *)param_4[1],
                 *(code **)(*param_1 + 0x118));
      return;
    case 10:
      iVar1 = (**(code **)(*param_1 + 0xc0))(param_1);
      break;
    case 0xb:
      iVar1 = (**(code **)(*param_1 + 0xd0))(param_1);
      break;
    case 0xc:
      iVar1 = (**(code **)(*param_1 + 0xd8))(param_1);
      break;
    case 0xd:
      iVar1 = (**(code **)(*param_1 + 0xe0))(param_1);
      break;
    case 0xe:
      iVar1 = (**(code **)(*param_1 + 0xe8))(param_1);
      break;
    default:
      return;
    }
    piVar4 = (int *)*param_4;
    if (piVar4 == (int *)0x0) {
      return;
    }
  }
  else {
    if (param_2 != 0xc) {
      if (param_2 != 9) {
        return;
      }
      if (param_3 == 0) {
        pvVar2 = operator_new(0xa8);
        FUN_1002506b0(pvVar2,param_4[1],param_4[2]);
        if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
          *(undefined8 *)*param_4 = pvVar2;
          return;
        }
        return;
      }
      return;
    }
    if (param_3 == 5) {
      if (*(int *)param_4[1] != 1) {
LAB_1008171e2:
        *(undefined4 *)*param_4 = 0xffffffff;
        return;
      }
      iVar1 = DAT_10226db58;
      if (DAT_10226db58 == 0) {
        iVar1 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
        DAT_10226db58 = iVar1;
      }
    }
    else {
      if ((param_3 != 6) || (*(int *)param_4[1] != 0)) goto LAB_1008171e2;
      iVar1 = DAT_102274888;
      if (DAT_102274888 == 0) {
        iVar1 = FUN_100613da0("CLicenseManager::DialogType",0xffffffffffffffff,1);
        DAT_102274888 = iVar1;
      }
    }
    piVar4 = (int *)*param_4;
  }
  *piVar4 = iVar1;
  return;
}

