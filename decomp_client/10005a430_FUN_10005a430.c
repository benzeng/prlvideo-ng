
undefined8 FUN_10005a430(undefined8 param_1,short *param_2)

{
  undefined *puVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_type_102269648);
  if ((lVar3 == 0xe) &&
     (lVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_CGEvent_102269a30),
     puVar1 = PTR__objc_msgSend_1021e1c68, lVar3 != 0)) {
    sVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_subtype_102269a38);
    *param_2 = sVar2;
    lVar4 = (*(code *)puVar1)(param_1,PTR_s_data1_102269a40);
    lVar5 = (*(code *)puVar1)(param_1,PTR_s_data2_102269a48);
    lVar3 = _CGEventGetIntegerValueField(lVar3,0x2a);
    if (*param_2 == 6) {
      if (((lVar4 == 0x6c6b7570) && (lVar5 == 0x6c6b7570)) && (lVar3 != 0x12181612)) {
        return 1;
      }
    }
    else if ((((lVar3 != 0x12181612) && (lVar5 == 0x6c6b7570)) && (lVar4 == 0x6c6b7570)) &&
            (*param_2 == 9)) {
      return 1;
    }
  }
  return 0;
}

