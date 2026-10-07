
int FUN_1005f7670(long param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10058e440(*param_2,param_1 + 0x62);
  if (iVar1 < 0) {
    FUN_1008e3970("","vdisk",0,"Rollback failed with code 0x%x!",iVar1);
  }
  return iVar1;
}

