
void FUN_100365c30(long param_1,undefined8 *param_2)

{
  long lVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)*param_2;
  if (pbVar2 == (byte *)0x0) {
    return;
  }
  if ((*pbVar2 & 0x10) != 0) {
    FUN_10035d2c0(*(undefined8 *)(param_1 + 0xc0),pbVar2);
    pbVar2 = (byte *)*param_2;
    if (pbVar2 == (byte *)0x0) {
      return;
    }
  }
  *param_2 = 0;
  if ((*(long *)(pbVar2 + 0x10) != 0) && (*(long *)(pbVar2 + 0x18) == 0)) {
    FUN_10035c0d0(*(undefined8 *)(param_1 + 8),pbVar2);
  }
  FUN_10035bc70(*(undefined8 *)(param_1 + 8),pbVar2);
  lVar1 = *(long *)(pbVar2 + 0x48);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(pbVar2 + 0x40);
  *(long *)(*(long *)(pbVar2 + 0x40) + 0x10) = lVar1;
  operator_delete(pbVar2);
  return;
}

