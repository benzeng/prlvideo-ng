
int FUN_1005105a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  undefined8 uVar5;
  char local_31;
  
  local_31 = (char)((ulong)in_RAX >> 0x38);
  cVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_respondsToSelector__100bed958);
  puVar2 = PTR__OBJC_CLASS___NSInvocation_100bedc28;
  puVar1 = PTR__objc_msgSend_100ba25e8;
  if (cVar3 == '\0') {
    local_31 = '\0';
  }
  else {
    uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_class_100bed938);
    uVar4 = (*(code *)puVar1)(uVar4,PTR_s_instanceMethodSignatureForSelect_100bed968,param_3);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)puVar1)(puVar2,PTR_s_invocationWithMethodSignature__100bed970,uVar4);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)PTR__objc_release_100ba25f0)(uVar4);
    (*(code *)PTR__objc_msgSend_100ba25e8)(uVar5,PTR_s_setSelector__100bed978,param_3);
    (*(code *)PTR__objc_msgSend_100ba25e8)(uVar5,PTR_s_setTarget__100bed980,param_1);
    (*(code *)PTR__objc_msgSend_100ba25e8)(uVar5,PTR_s_invoke_100bed988);
    (*(code *)PTR__objc_msgSend_100ba25e8)(uVar5,PTR_s_getReturnValue__100bed990,&local_31);
    (*(code *)PTR__objc_release_100ba25f0)(uVar5);
  }
  return (int)local_31;
}

