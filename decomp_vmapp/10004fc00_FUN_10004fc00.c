
void FUN_10004fc00(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 local_2c;
  long *local_28;
  undefined1 local_1c [4];
  
  local_28 = (long *)0x0;
  uVar4 = 0;
  if (*param_3 != 0) {
    uVar4 = *(undefined8 *)(*param_3 + 0x10);
  }
  cVar3 = FUN_100790630(uVar4,0,local_1c,&local_28,&local_2c);
  if (cVar3 == '\0') {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("UIEMU","vm",1,"Invalid buffers count");
    }
  }
  else {
    (**(code **)(*param_1 + 0x38))(param_1,param_2,&local_28,local_2c);
  }
  if (local_28 != (long *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  return;
}

