
void FUN_100cbc640(undefined8 *param_1)

{
  byte *pbVar1;
  
  for (pbVar1 = (byte *)*param_1; pbVar1 != (byte *)0x0; pbVar1 = *(byte **)(pbVar1 + 0x10)) {
    _printf("item\t%02x%02x%02x%02x%02x%02x%02x%02x\n",(ulong)*pbVar1,(ulong)pbVar1[1],
            (ulong)pbVar1[2],(ulong)pbVar1[3],(ulong)pbVar1[4],(uint)pbVar1[5],(uint)pbVar1[6],
            (uint)pbVar1[7]);
  }
  return;
}

