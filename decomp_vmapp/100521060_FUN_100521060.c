
void FUN_100521060(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  string local_48 [24];
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSTimeZone_100bedc50,PTR_s_knownTimeZoneNames_100beda78);
  iVar2 = (*(code *)puVar1)(uVar3,PTR_s_count_100bed950);
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      uVar4 = (*(code *)puVar1)(uVar3,PTR_s_objectAtIndex__100bedad0,lVar6);
      pcVar5 = (char *)(*(code *)puVar1)(uVar4,PTR_s_UTF8String_100bed218);
      _strlen(pcVar5);
      std::string::__init((char *)local_48,(ulong)pcVar5);
      if (*(string **)(param_1 + 8) == *(string **)(param_1 + 0x10)) {
        FUN_1000e2970(param_1,local_48);
      }
      else {
        std::string::string(*(string **)(param_1 + 8),local_48);
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x18;
      }
      std::string::~string(local_48);
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar2);
  }
  return;
}

