
undefined8 FUN_10007a5f0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (&cf_aGFzUGVyc2lzdGVudFN0YXRlVG9SZXN0b3Jl,PTR_s_base64Decode_102269eb0);
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_UTF8String_1022699e8);
  uVar3 = _sel_registerName(uVar3);
  cVar2 = (*(code *)puVar1)(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),
                            PTR_s_respondsToSelector__102269d98,uVar3);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),uVar3);
  }
  return uVar3;
}

