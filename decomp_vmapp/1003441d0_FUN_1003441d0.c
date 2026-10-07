
void FUN_1003441d0(byte *param_1,uint param_2,float *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)param_2;
  if ((*(float *)(param_1 + uVar3 * 0x18 + 0x398) == *param_3) &&
     (!NAN(*(float *)(param_1 + uVar3 * 0x18 + 0x398)) && !NAN(*param_3))) {
    if ((*(float *)(param_1 + uVar3 * 0x18 + 0x39c) == param_3[1]) &&
       (!NAN(*(float *)(param_1 + uVar3 * 0x18 + 0x39c)) && !NAN(param_3[1]))) {
      if ((*(float *)(param_1 + uVar3 * 0x18 + 0x3a0) == param_3[2]) &&
         (!NAN(*(float *)(param_1 + uVar3 * 0x18 + 0x3a0)) && !NAN(param_3[2]))) {
        if ((*(float *)(param_1 + uVar3 * 0x18 + 0x3a4) == param_3[3]) &&
           (!NAN(*(float *)(param_1 + uVar3 * 0x18 + 0x3a4)) && !NAN(param_3[3]))) {
          if ((*(float *)(param_1 + uVar3 * 0x18 + 0x3a8) == param_3[4]) &&
             (!NAN(*(float *)(param_1 + uVar3 * 0x18 + 0x3a8)) && !NAN(param_3[4]))) {
            if ((*(float *)(param_1 + uVar3 * 0x18 + 0x3ac) == param_3[5]) &&
               (!NAN(*(float *)(param_1 + uVar3 * 0x18 + 0x3ac)) && !NAN(param_3[5]))) {
              return;
            }
          }
        }
      }
    }
  }
  pbVar1 = param_1 + uVar3 * 0x18 + 0x398;
  *(undefined8 *)(pbVar1 + 0x10) = *(undefined8 *)(param_3 + 4);
  uVar2 = *(undefined8 *)param_3;
  *(undefined8 *)(pbVar1 + 8) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)pbVar1 = uVar2;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1 << ((byte)param_2 & 0x1f);
  *param_1 = *param_1 | 0x20;
  return;
}

