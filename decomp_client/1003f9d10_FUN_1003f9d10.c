
void FUN_1003f9d10(long param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  QArrayData *local_28;
  undefined1 local_1a;
  
  if ((int)param_2 == 0xc) {
    switch(param_3) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      if (*(int *)param_4[1] != 0) {
        if (*(int *)param_4[1] == 1) {
          if (DAT_10226db58 == 0) {
            DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
          }
          *(int *)*param_4 = DAT_10226db58;
          return;
        }
        goto switchD_1003f9d3f_default;
      }
      puVar1 = (undefined4 *)*param_4;
      break;
    case 4:
      puVar1 = (undefined4 *)*param_4;
      if (*(int *)param_4[1] != 0) {
        *puVar1 = 0xffffffff;
        return;
      }
      break;
    default:
switchD_1003f9d3f_default:
      *(undefined4 *)*param_4 = 0xffffffff;
      return;
    }
    *puVar1 = 2;
    return;
  }
  if ((int)param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    uVar5 = (undefined1)*(undefined8 *)(param_1 + 0x10);
    break;
  case 1:
    FUN_1003f8540(param_1,param_2,*(undefined4 *)param_4[2]);
    return;
  case 2:
    uVar5 = (undefined1)*(undefined8 *)(param_1 + 0x10);
    break;
  case 3:
    FUN_1003f8f90(param_1,param_2,*(undefined4 *)param_4[2]);
    return;
  case 4:
    if (-1 < *(int *)param_4[1]) {
      uVar2 = QObject::sender();
      lVar3 = ___dynamic_cast(uVar2,PTR_typeinfo_1021e1720,&PTR_vtable_102205010,0);
      FUN_1003f8b90(param_1,*(undefined4 *)(lVar3 + 0x34));
    }
    uVar5 = (undefined1)*(undefined8 *)(param_1 + 0x10);
    break;
  case 5:
    FUN_1003f92b0(param_1,param_2,*(undefined4 *)param_4[2]);
    return;
  case 6:
    uVar2 = param_4[1];
    uVar4 = param_4[2];
    uVar5 = *(undefined1 *)param_4[3];
    goto LAB_1003f9e9d;
  case 7:
    uVar2 = param_4[1];
    uVar4 = param_4[2];
    uVar5 = 1;
LAB_1003f9e9d:
    FUN_1003f7d60(param_1,uVar2,uVar4,uVar5);
    return;
  case 8:
    local_28 = (QArrayData *)PTR_shared_null_1021e1288;
    FUN_1003f7d60(param_1,param_4[1],&local_28,1);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return;
        }
        local_1a = 0;
      }
      QArrayData::deallocate(local_28,2,8);
    }
  default:
    return;
  }
  CMappingValueHandler::handleValueFinished((bool)uVar5);
  return;
}

