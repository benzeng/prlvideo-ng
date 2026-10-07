
/* Function Stack Size: 0x20 bytes */

void __thiscall
MethodInfo::setMetaMethod_(MethodInfo *this,ID param_1,SEL param_2,QMetaMethod param_3)

{
  SEL local_18;
  undefined4 local_10;
  
  local_10 = param_3.field0_0x0._0_4_;
  local_18 = param_2;
  _objc_copyStruct(this + _metaMethod,&local_18,0x10,1,0);
  return;
}

