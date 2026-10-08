
int FUN_100df3700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  undefined8 uVar5;
  char local_31;
  
  local_31 = (char)((ulong)in_RAX >> 0x38);
  cVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_respondsToSelector__102269d98);
  puVar2 = PTR__OBJC_CLASS___NSInvocation_10226ab30;
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (cVar3 == '\0') {
    local_31 = '\0';
  }
  else {
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_class_102269100);
    uVar4 = (*(code *)puVar1)(uVar4,PTR_s_instanceMethodSignatureForSelect_10226a6d8,param_3);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)puVar1)(puVar2,PTR_s_invocationWithMethodSignature__10226a6e0,uVar4);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)PTR__objc_release_1021e1c70)(uVar4);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setSelector__10226a6e8,param_3);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setTarget__102268cd8,param_1);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_invoke_10226a6f0);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_getReturnValue__10226a6f8,&local_31);
    (*(code *)PTR__objc_release_1021e1c70)(uVar5);
  }
  return (int)local_31;
}

