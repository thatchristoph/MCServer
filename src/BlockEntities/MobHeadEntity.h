// MobHeadEntity.h

// Declares the cMobHeadEntity class representing a single skull/head in the world





#pragma once

#include "BlockEntity.h"
#include "Defines.h"





// tolua_begin

class cMobHeadEntity :
	public cBlockEntity
{
	typedef cBlockEntity super;
	
public:

	// tolua_end
	
	BLOCKENTITY_PROTODEF(cMobHeadEntity);
	
	/** Creates a new mob head entity at the specified block coords. a_World may be nullptr */
	cMobHeadEntity(int a_BlockX, int a_BlockY, int a_BlockZ, cWorld * a_World);

	// tolua_begin
	
	/** Set the Type */
	void SetType(const eMobHeadType & a_SkullType);
	
	/** Set the Rotation */
	void SetRotation(eMobHeadRotation a_Rotation);
	
	/** Set the Player Name for Mobheads with Player type */
	void SetOwner(const AString & a_Owner);
	
	/** Get the Type */
	eMobHeadType GetType(void) const { return m_Type; }
	
	/** Get the Rotation */
	eMobHeadRotation GetRotation(void) const { return m_Rotation; }
	
	/** Get the setted Player Name */
	AString GetOwner(void) const { return m_Owner; }
	
	// tolua_end
	
	virtual void UsedBy(cPlayer * a_Player) override;
	virtual void SendTo(cClientHandle & a_Client) override;

private:

	eMobHeadType m_Type;
	eMobHeadRotation m_Rotation;
	AString m_Owner;
} ;  // tolua_export




