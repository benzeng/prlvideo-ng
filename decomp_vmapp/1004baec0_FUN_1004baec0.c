
void FUN_1004baec0(undefined8 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if (param_1[1] != 0) {
    _CGContextConvertRectToDeviceSpace(&local_38);
    in_stack_00000020 = local_20;
    in_stack_00000018 = local_28;
    in_stack_00000010 = local_30;
    in_stack_00000008 = local_38;
    _CGContextScaleCTM(DAT_100b44c90,DAT_100b44c98,*param_1);
    _CGContextTranslateCTM(0,(double)param_1[7] / (double)param_1[5],*param_1);
    _CGContextConvertRectToUserSpace(&local_58,*param_1);
    in_stack_00000020 = local_40;
    in_stack_00000018 = local_48;
    in_stack_00000010 = local_50;
    in_stack_00000008 = local_58;
    _CGContextRelease(*param_1);
    (*DAT_1011cced0)(param_1[1]);
    (*DAT_1011ccec0)(param_1[1]);
    local_60 = 0;
    iVar2 = (*DAT_1011ccc58)(&stack0x00000008,1,&local_60);
    pcVar1 = DAT_1011cce28;
    if (iVar2 == 0) {
      uVar3 = (*DAT_1011ccc38)();
      (*pcVar1)(uVar3,*(undefined4 *)(param_1 + 8),local_60);
      (*DAT_1011ccc48)(local_60);
    }
    return;
  }
  _CGContextFlush(*param_1);
  _CGContextRelease(*param_1);
  return;
}

