
void FUN_10085cc20(undefined8 param_1,int param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  QArrayData *local_20;
  undefined1 local_12;
  
  if (param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    uVar2 = *(undefined8 *)(param_4 + 8);
    uVar1 = **(undefined4 **)(param_4 + 0x10);
    break;
  case 1:
    uVar2 = *(undefined8 *)(param_4 + 8);
    uVar1 = 0;
    break;
  case 2:
    local_20 = (QArrayData *)PTR_shared_null_1021e1288;
    FUN_10077fe90(param_1,&local_20,0);
    if (*(int *)local_20 == -1) {
      return;
    }
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
    return;
  case 3:
    FUN_100780a80(param_1,**(undefined4 **)(param_4 + 8));
    return;
  case 4:
    FUN_100781090(param_1,*(undefined8 *)(param_4 + 8));
    return;
  case 5:
    FUN_100781100();
    return;
  case 6:
    FUN_1007811d0(param_1,**(undefined4 **)(param_4 + 8));
    return;
  case 7:
    FUN_1007811a0();
    return;
  case 8:
    FUN_10085ce40();
    return;
  case 9:
    FUN_10085cee0();
    return;
  default:
    return;
  }
  FUN_10077fe90(param_1,uVar2,uVar1);
  return;
}

