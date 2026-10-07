
/* CBaseNode::cleanupClassProperties() */

void __thiscall CBaseNode::cleanupClassProperties(CBaseNode *this)

{
  (**(code **)(*(long *)this + 0x30))();
  (**(code **)(*(long *)this + 0x28))(this);
                    /* WARNING: Could not recover jumptable at 0x00010001252a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x18))(this,0);
  return;
}

