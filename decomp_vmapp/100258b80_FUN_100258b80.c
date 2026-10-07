
void FUN_100258b80(long param_1)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 in_register_00000004;
  undefined8 local_38;
  
  local_38 = CONCAT44(in_register_00000004,in_EAX);
  do {
    iVar1 = FUN_1002efb70(*(undefined8 *)(param_1 + 0x40),1,1000000);
    FUN_1002ef6b0(*(undefined8 *)(param_1 + 0x40));
    local_38 = CONCAT44(0xffffffff,(sigset_t)local_38);
    _sigprocmask(1,(sigset_t *)((long)&local_38 + 4),(sigset_t *)&local_38);
    QMutex::lock();
    FUN_1002588f0(param_1);
    QMutex::unlock();
    _sigprocmask(3,(sigset_t *)&local_38,(sigset_t *)0x0);
  } while (iVar1 != -0xfffc);
  return;
}

