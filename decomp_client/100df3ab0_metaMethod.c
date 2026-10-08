
/* Function Stack Size: 0x10 bytes */

QMetaMethod MethodInfo::metaMethod(ID param_1,SEL param_2)

{
  QMetaMethod local_18;
  
  _objc_copyStruct(&local_18,param_1 + _metaMethod,0x10,1,0);
  return local_18;
}

