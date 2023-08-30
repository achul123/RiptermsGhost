#include "Entity.h"
#include "../../util/Vec3/Vec3.h"

Ripterms::Maths::Vector3d Entity::getPosition() const
{
	if (!instance) return Ripterms::Maths::Vector3d();
	if (Ripterms::majorVersion == Ripterms::Version::MAJOR_1_16_5) {
		return Vec3(env->GetObjectField(instance, EntityClass.getFieldID("positionVec")), env).getVector();
	}
	return Ripterms::Maths::Vector3d(
		(float)env->GetDoubleField(instance, EntityClass.getFieldID("posX")),
		(float)env->GetDoubleField(instance, EntityClass.getFieldID("posY")),
		(float)env->GetDoubleField(instance, EntityClass.getFieldID("posZ"))
	);
}

Ripterms::Maths::Vector2d Entity::getRotation() const
{
	if (!instance) return Ripterms::Maths::Vector2d();
	return Ripterms::Maths::Vector2d(
		env->GetFloatField(instance, EntityClass.getFieldID("rotationYaw")),
		env->GetFloatField(instance, EntityClass.getFieldID("rotationPitch"))
	);
}

Ripterms::Maths::Vector3d Entity::getMotion() const
{
	if (!instance) return Ripterms::Maths::Vector3d();
	if (Ripterms::majorVersion == Ripterms::Version::MAJOR_1_16_5)
	{
		return Vec3(env->GetObjectField(instance, EntityClass.getFieldID("motion")), env).getVector();
	}
	return Ripterms::Maths::Vector3d
	(
		(float)env->GetDoubleField(instance, EntityClass.getFieldID("motionX")),
		(float)env->GetDoubleField(instance, EntityClass.getFieldID("motionY")),
		(float)env->GetDoubleField(instance, EntityClass.getFieldID("motionZ"))
	);
}

int Entity::getHurtResistantTime() const
{
	if (!instance) return 0;
	return env->GetIntField(instance, EntityClass.getFieldID("hurtResistantTime"));
}

int Entity::getTicksExisted() const
{
	if (!instance) return 0;
	return env->GetIntField(instance, EntityClass.getFieldID("ticksExisted"));
}

AxisAlignedBB Entity::getBoundingBox() const
{
	if (!instance) return AxisAlignedBB(env);
	return AxisAlignedBB(env->GetObjectField(instance, EntityClass.getFieldID("boundingBox")), env);
}

void Entity::setMotion(const Ripterms::Maths::Vector3d& motion)
{
	if (!instance) return;
	if (Ripterms::majorVersion == Ripterms::Version::MAJOR_1_16_5)
	{
		Vec3 motion_obj(env->GetObjectField(instance, EntityClass.getFieldID("motion")), env);
		motion_obj.setVector(motion);
		return;
	}
	env->SetDoubleField(instance, EntityClass.getFieldID("motionX"), motion.x);
	env->SetDoubleField(instance, EntityClass.getFieldID("motionY"), motion.y);
	env->SetDoubleField(instance, EntityClass.getFieldID("motionZ"), motion.z);
}

void Entity::setRotation(const Ripterms::Maths::Vector2d& yawPitch)
{
	if (!instance) return;
	env->SetFloatField(instance, EntityClass.getFieldID("rotationYaw"), yawPitch.x);
	env->SetFloatField(instance, EntityClass.getFieldID("rotationPitch"), yawPitch.y);
}
