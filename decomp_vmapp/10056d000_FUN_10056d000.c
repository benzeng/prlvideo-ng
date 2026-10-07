
void FUN_10056d000(long param_1,long *param_2)

{
  undefined8 *puVar1;
  
  if ((param_2 != (long *)0x0) && (param_2[3] != 0)) {
    if ((long *)*param_2 == param_2) {
      puVar1 = *(undefined8 **)(param_1 + 0x1240);
      *(long **)(param_1 + 0x1240) = param_2;
      *param_2 = param_1 + 0x1238;
      param_2[1] = (long)puVar1;
      *puVar1 = param_2;
    }
    else {
      FUN_1008e3970("","vdisk",0,"Error: CallOnWait: double cd_list_add");
      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","DiskStatesImp.cpp",0x8c3,
                    "CallOnWait");
    }
  }
  return;
}

