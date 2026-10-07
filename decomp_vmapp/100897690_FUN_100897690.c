
void FUN_100897690(undefined4 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = *(long *)(param_3 + 8);
  puVar2 = *(undefined4 **)(lVar1 + 0x40);
  *puVar2 = param_1;
  puVar2[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001008976a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x38))(lVar1);
  return;
}

