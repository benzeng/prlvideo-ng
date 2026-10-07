
void FUN_1004680e0(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  QArrayData *local_70;
  undefined1 local_68 [8];
  void *local_60;
  void *local_58;
  string local_40 [47];
  undefined1 local_11;
  
  uVar1 = 0x67;
  if (param_2 != '\0') {
    uVar1 = 0x7f;
  }
  FUN_100469fb0(local_68,10,uVar1,0,0,0);
  local_70 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_100468940(param_1,local_68,&local_70);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_11 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100468164;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100468164:
  std::string::~string(local_40);
  if (local_60 != (void *)0x0) {
    if (local_58 != local_60) {
      local_58 = local_60;
    }
    operator_delete(local_60);
  }
  return;
}

