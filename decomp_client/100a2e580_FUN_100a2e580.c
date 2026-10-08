
undefined8 * FUN_100a2e580(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  *param_1 = param_1;
  param_1[1] = param_1;
  param_1[2] = 0;
  uVar4 = 0;
  puVar2 = param_1;
  if ((param_3 & 1) != 0) {
    puVar1 = operator_new(0x18);
    puVar1[2] = *(undefined8 *)PTR__kUTTypeUTF8PlainText_1021e1c38;
    puVar1[1] = param_1;
    *puVar1 = param_1;
    param_1[1] = puVar1;
    *param_1 = puVar1;
    param_1[2] = 1;
    puVar2 = operator_new(0x18);
    puVar2[2] = *(undefined8 *)PTR__kUTTypeUTF16PlainText_1021e1c30;
    puVar2[1] = param_1;
    *puVar2 = puVar1;
    puVar1[1] = puVar2;
    *param_1 = puVar2;
    param_1[2] = 2;
    uVar4 = 2;
  }
  puVar1 = puVar2;
  if ((param_3 & 2) != 0) {
    puVar1 = operator_new(0x18);
    puVar1[2] = &cf_com_apple_traditional_mac_plain_text;
    puVar1[1] = param_1;
    *puVar1 = puVar2;
    puVar2[1] = puVar1;
    *param_1 = puVar1;
    uVar4 = uVar4 | 1;
    param_1[2] = uVar4;
  }
  if ((param_3 & 0x44) != 0) {
    puVar2 = operator_new(0x18);
    puVar2[2] = *(undefined8 *)PTR__kUTTypePNG_1021e1c10;
    puVar2[1] = param_1;
    *puVar2 = puVar1;
    puVar1[1] = puVar2;
    *param_1 = puVar2;
    param_1[2] = uVar4 + 1;
    puVar3 = operator_new(0x18);
    puVar3[2] = *(undefined8 *)PTR__kUTTypeBMP_1021e1be8;
    puVar3[1] = param_1;
    *puVar3 = puVar2;
    puVar2[1] = puVar3;
    *param_1 = puVar3;
    param_1[2] = uVar4 + 2;
    puVar1 = operator_new(0x18);
    puVar1[2] = *(undefined8 *)PTR__kUTTypeTIFF_1021e1c20;
    puVar1[1] = param_1;
    *puVar1 = puVar3;
    puVar3[1] = puVar1;
    *param_1 = puVar1;
    uVar4 = uVar4 + 3;
    param_1[2] = uVar4;
  }
  if ((param_3 & 8) == 0) {
    puVar3 = puVar1;
    if ((param_3 & 0x18) != 0x10) goto LAB_100a2e784;
    puVar3 = operator_new(0x18);
    puVar2 = (undefined8 *)PTR__kUTTypeHTML_1021e1c00;
  }
  else {
    puVar3 = operator_new(0x18);
    puVar2 = (undefined8 *)PTR__kUTTypeRTF_1021e1c18;
  }
  puVar3[2] = *puVar2;
  puVar3[1] = param_1;
  *puVar3 = puVar1;
  puVar1[1] = puVar3;
  *param_1 = puVar3;
  uVar4 = uVar4 + 1;
  param_1[2] = uVar4;
LAB_100a2e784:
  if ((param_3 & 0x20) != 0) {
    puVar2 = operator_new(0x18);
    puVar2[2] = *(undefined8 *)PTR__kUTTypeFileURL_1021e1bf8;
    puVar2[1] = param_1;
    *puVar2 = puVar3;
    puVar3[1] = puVar2;
    *param_1 = puVar2;
    param_1[2] = uVar4 + 1;
  }
  return param_1;
}

