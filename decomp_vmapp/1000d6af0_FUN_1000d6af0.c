
undefined8 FUN_1000d6af0(long *param_1,undefined4 param_2,long param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_38;
  
  uVar2 = 0;
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    iVar1 = FUN_1000d6260(param_1,param_2,&local_38);
    if ((iVar1 == 0) || (iVar1 != param_4)) {
      FUN_1008e3970("","vm",0,"CSRFile::ReWriteOption Failed. OptId 0x%x uOptLen %u Actual %u",
                    param_2,param_4,iVar1);
      lVar3 = *param_1;
    }
    else {
      (**(code **)(*param_1 + 0x88))(param_1,local_38);
      iVar1 = QIODevice::write((char *)param_1,param_3);
      if (iVar1 == param_4) {
        (**(code **)(*param_1 + 0x88))(param_1,uVar2);
        return 0;
      }
      FUN_1008e3970("","vm",0,"CSRFile::ReWriteOption Failed. OptId 0x%x uOptLen %u Actual %u",
                    param_2,param_4,iVar1);
      lVar3 = *param_1;
    }
    (**(code **)(lVar3 + 0x88))(param_1,uVar2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

