// Automatically generated by FrederoxDev/Reverse-Tools/CxxParser/HeaderGenerator.py
#pragma once
#include "ChunkPos.hpp"
#include "dimension/Dimension.hpp"
#include <optional>
#include <vector>

class BlockSource;
class Block;
class BlockSourceListener;
class EntityContext;
class BlockPos;
class Vec3;
class AutomaticID;
class GetCollisionShapeInterface;
class LevelChunk;
class Material;
class Actor;
class ILevel;
class ChunkSource;
class AABB;
class WeakRefT;
struct ActorBlockSyncMessage;
struct SharePtrRefTraits;
struct Bounds;
enum MaterialType;

class BlockSource {

public:
    virtual ~BlockSource();
    /**
     * @brief Gets a block
     *
     * @param x The x position of the block as an int
     * @param y The y position of the block as an int
     * @param z The z position of the block as an int
     *
     * @return Returns a constant Block object
     */
    virtual const Block& getBlock(int x, int y, int z) const;
    /**
     * @brief Gets a block
     *
     * @param pos The position of the block as a BlockPos
     *
     * @return Returns a constant Block object
     */
    virtual const Block& getBlock(const BlockPos& pos) const;
    virtual const Block& getBlock(const BlockPos& pos, unsigned int layer) const;

    /**
     * @note Failed to match '_ZNK11BlockSource14getBlockEntityERK8BlockPos'
     */
    virtual void filler0();

    virtual const Block& getExtraBlock(const BlockPos& p) const;
    virtual const Block& getLiquidBlock(const BlockPos& p) const;
    virtual bool hasBlock(const BlockPos& pos) const;
    virtual bool containsAnyLiquid(const AABB& box) const;
    virtual bool containsMaterial(const AABB& box, MaterialType material) const;
    virtual bool isUnderWater(const Vec3& pos, const Block& block) const;
    /**
     * @brief Gets the Material of a block
     *
     * @param pos The position of the block as a BlockPos
     *
     * @return Returns a constant Material object
     */
    virtual const Material& getMaterial(const BlockPos& pos) const;
    /**
     * @brief Gets the Material of a block
     *
     * @param x The x position of the block as an int
     * @param y The y position of the block as an int
     * @param z The z position of the block as an int
     *
     * @return Returns a constant Material object
     */
    virtual const Material& getMaterial(int x, int y, int z) const;
    virtual bool hasBorderBlock(BlockPos pos) const;
    virtual LevelChunk* getChunkAt(const BlockPos& pos) const;
    virtual bool hasChunksAt(const Bounds& bounds, bool ignoreClientChunk) const;
    virtual bool hasChunksAt(const BlockPos& pos, int r, bool ignoreClientChunk) const;
    virtual bool hasChunksAt(const AABB& bb, bool ignoreClientChunk) const;

    /**
     * @note This is virtual AutomaticID<Dimension, int> getDimensionId() const;
     */
    virtual void filler1();

    virtual void fetchAABBs(std::vector<AABB, std::allocator<AABB>>& shapes, const AABB& intersectTestBox, bool withUnloadedChunks) const;

    /**
     * @note The Parameters are unknown, known options:
     *
     *       (const AABB& box, float* actualSurfaceOffset, bool withUnloadedChunks, IActorMovementProxy* entity)
     *
     *       (std::vector<AABB, std::allocator<AABB>>& shapes, const AABB& box, float* actualSurfaceOffset, bool withUnloadedChunks, optional_ref<const GetCollisionShapeInterface> entity)
     *
     *       This is virtual void fetchCollisionShapes(std::vector<AABB>&, const AABB&, bool, optional_ref<const GetCollisionShapeInterface>, std::vector<AABB>*) const;
     */
    virtual void filler11();

    /**
     * @note This is virtual void fetchCollisionShapesAndBlocks(std::vector<BlockSourceVisitor::CollisionShape, std::allocator<BlockSourceVisitor::CollisionShape>>&, const AABB&, bool, optional_ref<const GetCollisionShapeInterface>, std::vector<AABB, std::allocator<AABB>>*) const;
     */
    virtual void filler2();

    /**
     * @note This is virtual AABB getTallestCollisionShape(const AABB&, float*, bool intersectTestBox, optional_ref<const GetCollisionShapeInterface> actualSurfaceOffset) const;
     */
    virtual void filler3();

    /**
     * @brief Gets the Brightness of a block at a certain position
     *
     * @param pos The position of the block as a BlockPos
     *
     * @return Returns a float for the brightness
     */
    virtual float getBrightness(const BlockPos& pos) const;

    virtual std::vector<AABB, std::allocator<AABB>>& fetchAABBs_(const AABB& intersectTestBox, bool withUnloadedChunks);
    /**
     * @note The Parameters are unknown, known options:
     *
     *       (const AABB& box, float* actualSurfaceOffset, bool withUnloadedChunks, IActorMovementProxy* entity)
     *
     *       (std::vector<AABB, std::allocator<AABB>>& shapes, const AABB& box, float* actualSurfaceOffset, bool withUnloadedChunks, optional_ref<const GetCollisionShapeInterface> entity)
     */
    virtual std::vector<AABB, std::allocator<AABB>>& fetchCollisionShapes(const AABB&, bool, std::optional<const EntityContext>, std::vector<AABB, std::allocator<AABB>>*);

    /**
     * @note This is virtual WeakRef<BlockSource> getWeakRef();
     */
    virtual void filler4();

    virtual void addListener(BlockSourceListener& l);
    virtual void removeListener(BlockSourceListener& l);

    /**
     * @note This is virtual gsl::span<gsl::not_null<Actor*>> fetchEntities(const Actor* except, const AABB& bb, bool useHitbox, bool getDisplayEntities);
     */
    virtual void filler5();

    /**
     * @note Failed to match '_ZN11BlockSource13fetchEntitiesE9ActorTypeRK4AABBPK5ActorNSt3__18functionIFbPS4_EEE'
     */
    virtual void filler6();

    /**
     * @brief Places a given block at the given position
     *
     * @param pos The position where the block should be placed as a BlockPos
     *
     * @param block The block that should be placed at the given position
     *
     * @param blockChangeSource The Actor that changes the block
     *
     * @return Returns a bool that shows if the operation was successful
     */
    virtual bool setBlock(const BlockPos& pos, const Block& block, int updateFlags, const ActorBlockSyncMessage* syncMsg, Actor* blockChangeSource);
    /**
     * @brief Gets the minimum height of the region (Dimension minimum height)
     *
     * @return Returns a constant short
     */
    virtual short getMinHeight() const;
    /**
     * @brief Gets the maximum height of the region (Dimension maximum height)
     *
     * @return Returns a constant short
     */
    virtual short getMaxHeight() const;

    /**
     * @note Failed to match '_ZNK11BlockSource12getDimensionEv'
     */
    virtual void filler7();

    /**
     * @brief Gets the dimension of the block source
     *
     * @return Returns a constant Dimension object
     */
    virtual const Dimension& getDimensionConst() const;

    /**
     * @note Failed to match '_ZN11BlockSource12getDimensionEv'
     */
    virtual void filler8();

    /**
     * @brief Gets the LevelChunk of a give position
     *
     * @param x The x position of the chunk as an int
     * @param z The z position of the chunk as an int
     *
     * @return Returns a pointer to a LevelChunk object
     */
    virtual LevelChunk* getChunk(int x, int z) const;
    /**
     * @brief Gets the LevelChunk of a give position
     *
     * @param pos The position of the chunk as a ChunkPos
     *
     * @return Returns a pointer to a LevelChunk object
     */
    virtual LevelChunk* getChunk(const ChunkPos& pos) const;

    /**
     * @note Failed to match '_ZN11BlockSource8getLevelEv'
     */
    virtual void filler9();

    virtual ILevel& getILevel() const;

    /**
     * @note Failed to match '_ZNK11BlockSource4clipERK4Vec3S2_b9ShapeTypeibbP5ActorRKNSt3__18functionIFbRKS_RK5BlockbEEE'
     */
    virtual void filler10();

    /**
     * @brief Gets the ChunkSource of the region
     *
     * @return Returns ChunkSource object
     */
    virtual ChunkSource& getChunkSource();
    /**
     * @brief Determines whether a block at a given position is solid
     *
     * @param pos The position of the block as a BlockPos
     *
     * @return Returns True if the block is solid, false if not
     */
    virtual bool isSolidBlockingBlock(const BlockPos& pos) const;
    /**
     * @brief Determines whether a block at a given position is solid
     *
     * @param x The x position of the block
     * @param y The y position of the block
     * @param z The z position of the block
     *
     * @return Returns True if the block is solid, false if not
     */
    virtual bool isSolidBlockingBlock(int x, int y, int z) const;
    virtual bool areChunksFullyLoaded(const BlockPos& pos, int r) const;

    /**
     * @note The Parameters are unknown
     */
    virtual bool canDoBlockDrops() const;

    /**
     * @note The Parameters are unknown
     */
    virtual bool canDoContainedItemDrops() const;

    virtual bool isInstaticking(const BlockPos& pos) const;
};