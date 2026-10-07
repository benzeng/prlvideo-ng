
void FUN_100072e30(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 local_28 [8];
  
  lVar1 = *(long *)(*(long *)(*param_3 + 0x10) + 0x80);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
  }
  if (*(uint *)(*(long *)(*param_3 + 0x10) + 0x8c) < 0x18) {
    FUN_1008e3970("","vm",0,"Wrong attach to vm package!");
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","0","CVmCommandsHandler.cpp",0x47a,
                  "addConnectionStatisticsNotifier");
  }
  else if ((*(byte *)(lVar2 + 0x19) & 0x10) != 0) {
    QMutex::lock();
    FUN_100022e50(param_1 + 0x368,param_2,local_28);
    FUN_100117220(param_1);
    QMutex::unlock();
    return;
  }
  return;
}

