
void FUN_10061d400(long param_1,byte param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  QArrayData *local_40;
  undefined1 local_32;
  
  lVar1 = *(long *)(param_1 + 0x18);
  puVar4 = (undefined8 *)(lVar1 + 0x30);
  if (param_3 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 0x78);
  }
  plVar2 = (long *)*puVar4;
  puVar4 = (undefined8 *)(lVar1 + 0x80);
  if (param_3 == 0) {
    puVar4 = (undefined8 *)(lVar1 + 0x38);
  }
  plVar3 = (long *)*puVar4;
  CProgressIndicator::toggleAnimation(SUB81(plVar2,0));
  (**(code **)(*plVar2 + 0x68))(plVar2,param_2);
  (**(code **)(*plVar3 + 0x68))(plVar3,param_2 ^ 1);
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_10061d510(param_1,2,param_3,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_32 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

