
void FUN_100785a30(long param_1,long *param_2)

{
  long *plVar1;
  long local_10;
  
  if ((((*param_2 != 0) && (*(int *)(*param_2 + 4) != 0)) && (local_10 = param_2[1], local_10 != 0))
     && (plVar1 = (long *)FUN_100786040(param_1 + 0x18,&local_10), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return;
}

