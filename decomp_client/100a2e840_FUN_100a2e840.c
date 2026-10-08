
undefined8 * FUN_100a2e840(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  cfstringStruct *pcVar3;
  
  *param_1 = param_1;
  param_1[1] = param_1;
  param_1[2] = 0;
  if (param_3 < 0x10) {
    switch(param_3) {
    case 1:
      puVar2 = operator_new(0x18);
      puVar2[2] = *(undefined8 *)PTR__kUTTypeUTF8PlainText_1021e1c38;
      puVar2[1] = param_1;
      *puVar2 = param_1;
      param_1[1] = puVar2;
      *param_1 = puVar2;
      param_1[2] = 1;
      puVar1 = operator_new(0x18);
      puVar1[2] = *(undefined8 *)PTR__kUTTypeUTF16ExternalPlainText_1021e1c28;
      puVar1[1] = param_1;
      *puVar1 = puVar2;
      puVar2[1] = puVar1;
      *param_1 = puVar1;
      param_1[2] = 2;
      puVar2 = operator_new(0x18);
      puVar2[2] = *(undefined8 *)PTR__kUTTypeUTF16PlainText_1021e1c30;
      puVar2[1] = param_1;
      *puVar2 = puVar1;
      puVar1[1] = puVar2;
      *param_1 = puVar2;
      param_1[2] = 3;
      break;
    case 2:
      puVar1 = operator_new(0x18);
      pcVar3 = &cf_com_apple_traditional_mac_plain_text;
      goto LAB_100a2ea57;
    case 4:
switchD_100a2e883_caseD_4:
      puVar2 = operator_new(0x18);
      puVar2[2] = *(undefined8 *)PTR__kUTTypePNG_1021e1c10;
      puVar2[1] = param_1;
      *puVar2 = param_1;
      param_1[1] = puVar2;
      *param_1 = puVar2;
      param_1[2] = 1;
      puVar1 = operator_new(0x18);
      puVar1[2] = *(undefined8 *)PTR__kUTTypeBMP_1021e1be8;
      puVar1[1] = param_1;
      *puVar1 = puVar2;
      puVar2[1] = puVar1;
      *param_1 = puVar1;
      param_1[2] = 2;
      puVar2 = operator_new(0x18);
      puVar2[2] = *(undefined8 *)PTR__kUTTypeTIFF_1021e1c20;
      puVar2[1] = param_1;
      *puVar2 = puVar1;
      puVar1[1] = puVar2;
      *param_1 = puVar2;
      param_1[2] = 3;
      puVar1 = operator_new(0x18);
      puVar1[2] = *(undefined8 *)PTR__kUTTypePDF_1021e1c08;
      puVar1[1] = param_1;
      *puVar1 = puVar2;
      puVar2[1] = puVar1;
      *param_1 = puVar1;
      param_1[2] = 4;
      break;
    case 8:
      puVar1 = operator_new(0x18);
      puVar2 = (undefined8 *)PTR__kUTTypeRTF_1021e1c18;
      goto LAB_100a2ea54;
    }
  }
  else {
    if (param_3 == 0x10) {
      puVar1 = operator_new(0x18);
      puVar2 = (undefined8 *)PTR__kUTTypeHTML_1021e1c00;
    }
    else {
      if (param_3 != 0x20) {
        if (param_3 != 0x40) {
          return param_1;
        }
        goto switchD_100a2e883_caseD_4;
      }
      puVar1 = operator_new(0x18);
      puVar2 = (undefined8 *)PTR__kUTTypeFileURL_1021e1bf8;
    }
LAB_100a2ea54:
    pcVar3 = (cfstringStruct *)*puVar2;
LAB_100a2ea57:
    puVar1[2] = pcVar3;
    puVar1[1] = param_1;
    *puVar1 = param_1;
    param_1[1] = puVar1;
    *param_1 = puVar1;
    param_1[2] = 1;
  }
  return param_1;
}

