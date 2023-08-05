#pragma once
#include <string>
inline const std::string mappings_forge_1_7_10 = R"(
{
	"java/lang/Object": {
		"obfuscated": "java/lang/Object",
		"fields": [],
		"methods": []
	},
	"java/lang/ClassLoader": {
		"obfuscated": "java/lang/ClassLoader",
		"fields": [],
		"methods": [
			{
				"name": "<init>",
				"obfuscated": "<init>",
				"signature": "()V",
				"static": false
			}
		]
	},
	"java/util/Collection": {
		"obfuscated": "java/util/Collection",
		"fields": [],
		"methods": [
			{
				"name": "toArray",
				"obfuscated": "toArray",
				"signature": "()[Ljava/lang/Object;",
				"static": false
			}
		]
	},
	"java/util/List": {
		"obfuscated": "java/util/List",
		"fields": [],
		"methods": []
	},
	"net/minecraft/client/Minecraft": {
		"obfuscated": "net/minecraft/client/Minecraft",
		"fields": [
			{
				"name": "theMinecraft",
				"obfuscated": "field_71432_P",
				"signature": "Lnet/minecraft/client/Minecraft;",
				"static": true
			},
			{
				"name": "thePlayer",
				"obfuscated": "field_71439_g",
				"signature": "Lnet/minecraft/client/entity/EntityClientPlayerMP;",
				"static": false
			},
			{
				"name": "theWorld",
				"obfuscated": "field_71441_e",
				"signature": "Lnet/minecraft/client/multiplayer/WorldClient;",
				"static": false
			}
		],
		"methods": [
		]
	},
	"net/minecraft/client/entity/EntityPlayerSP": {
		"obfuscated": "net/minecraft/client/entity/EntityPlayerSP",
		"fields": [],
		"methods": []
	},
	"net/minecraft/client/entity/AbstractClientPlayer": {
		"obfuscated": "net/minecraft/client/entity/AbstractClientPlayer",
		"fields": [],
		"methods": []
	},
	"net/minecraft/entity/player/EntityPlayer": {
		"obfuscated": "net/minecraft/entity/player/EntityPlayer",
		"fields": [],
		"methods": []
	},
	"net/minecraft/entity/EntityLivingBase": {
		"obfuscated": "net/minecraft/entity/EntityLivingBase",
		"fields": [],
		"methods": []
	},
	"net/minecraft/entity/Entity": {
		"obfuscated": "net/minecraft/entity/Entity",
		"fields": [
			{
				"name": "posX",
				"obfuscated": "field_70165_t",
				"signature": "D",
				"static": false
			},
			{
				"name": "posY",
				"obfuscated": "field_70163_u",
				"signature": "D",
				"static": false
			},
			{
				"name": "posZ",
				"obfuscated": "field_70161_v",
				"signature": "D",
				"static": false
			},
			{
				"name": "rotationYaw",
				"obfuscated": "field_70177_z",
				"signature": "F",
				"static": false
			},
			{
				"name": "rotationPitch",
				"obfuscated": "field_70125_A",
				"signature": "F",
				"static": false
			}
		],
		"methods": []
	},
	"net/minecraft/client/multiplayer/WorldClient": {
		"obfuscated": "net/minecraft/client/multiplayer/WorldClient",
		"fields": [],
		"methods": []
	},
	"net/minecraft/world/World": {
		"obfuscated": "net/minecraft/world/World",
		"fields": [
			{
				"name": "playerEntities",
				"obfuscated": "field_73010_i",
				"signature": "Ljava/util/List;",
				"static": false
			}
		],
		"methods": []
	},
	"net/minecraft/util/Vec3": {
		"obfuscated": "net/minecraft/util/Vec3",
		"fields": [
			{
				"name": "xCoord",
				"obfuscated": "field_72450_a",
				"signature": "D",
				"static": false
			},
			{
				"name": "yCoord",
				"obfuscated": "field_72448_b",
				"signature": "D",
				"static": false
			},
			{
				"name": "zCoord",
				"obfuscated": "field_72449_c",
				"signature": "D",
				"static": false
			}
		],
		"methods": []
	}
}
)";
